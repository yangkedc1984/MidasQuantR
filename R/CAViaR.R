#--------------------------------
# MAIN FUNCTIONS: Estimate MIDAS quantile regression
#--------------------------------
#' @importFrom stats quantile
#' @export CAViaR
CAViaR <- function(y,yDate,x = NULL, xDate = NULL,q = 0.01,horizon = 10, ovlap = FALSE, numInitialsRand = 10000, 
                   empQuant = NULL,numInitials = 10, GetSe = TRUE, Params = NULL, startPars = NULL,
                   MainSolver = "ucminf",SecondSolver = "Nelder-Mead",As = FALSE,fitcontrol = list(rep = 5),
                   warn = TRUE, simpleRet = FALSE, Uni = TRUE){
  #-- set up arguments ----
  
  #--- Form the single period setting for the return series-----
  nobs <- length(y)
  nobsShort = nobs-horizon+1
  yLowFreq = matrix(NA,ncol = 1, nrow = nobsShort)
  yDateLowFreq = matrix(NA,ncol = 1, nrow = nobsShort)
  for(t in 1:(nobs - horizon + 1)){
    yLowFreq[t,1] = sum(y[t:(t+horizon-1)]);
    yDateLowFreq[t,1] = yDate[t];
  }
  if(!ovlap){
    yLowFreq = yLowFreq[seq(1,nobsShort,horizon),1]
    yDateLowFreq = yDateLowFreq[seq(1,nobsShort,horizon),1]
  }
  if(simpleRet){
    y = exp(yLowFreq) - 1
  } else{
    y = yLowFreq
  }
  yDate = as.Date.numeric(yDateLowFreq,origin = "1970-01-01")
  if(is.null(x)){
    x = abs(y)
  }else {
    if(length(x) != length(y)){
      stop("\nCAviaR-->error: The explanatory variable should have the same length as the objective variable... \n")
    }
  }
  if(is.null(xDate)) xDate = yDate
  #-----Check the solvers input------
  # The CAViaR model is sensitive to the choice of the empirical quantile to start the dynamics. Here, we use the empirical
  # quantile of the first 10% of the data sample to start the quantile dynamics.
  if(is.null(empQuant)) empQuant = unname(quantile(y[1:round(0.10*length(y))],q))
  
  #----- In case the parameters is known, just fit the conditional quantile and return-----
  if(!is.null(Params)){
    condVaR = condVaR_cav(params = Params,yr = y,Xr = x,As = As,empQuant = empQuant,Uni = Uni)
    out = list(estPars = Params, pval = NaN, yLowFreq = y, yDate = yDate, condVaR = condVaR,
               quantile = q, As = As,Uni = Uni, simpleRet = simpleRet, Solvers = NaN,
               fval = NaN, conv = NaN)
  } else{
  #----- In case the paramters need to be estimated -----
  # Set the bounds for the parameters. The autoregressive paramter should be between 0 and 1?
  tol = 1e-10
  
  #----- Get the initial guess for the parameters-----
 betaIni = GetIniParams_cav(y = y, x = x, q = q, As = As, empQuant = empQuant, Uni = Uni, 
                            numInitialsRand = numInitialsRand, numInitials = numInitials)
  #----- Estimate the paramters -----------
  sol = .sol_cav(MainSolver = MainSolver,SecondSolver = SecondSolver,betaIni = betaIni,fun = objFun_cav,
             y = y, x = x,As = As,empQuant = empQuant,Uni = Uni, q = q,
             control = fitcontrol,warn = warn)
  #----- Preparing outputs and computing standard errors for estimated paramters-----
  # For the CAViaR model, the standard errors are calculated using the code from Engle and Manganelli
  
  estPars = sol$par
  fval = sol$value
  convergeFlag = sol$convergence
  if(convergeFlag == 1){
    warnings("\nBoth Solvers failed to converge, try with other available solvers...\n")
    out = list(estPars = estPars, pval = NA, y = y, yDate = yDate, 
               condVaR = NA, quantile = q, Uni = Uni, Solvers = c(MainSolver,SecondSolver),
               fval = fval, conv = convergeFlag, simpleRet = simpleRet,As = As)
  } else{
    condVaR = condVaR_cav(params = estPars,yr = y,Xr = x,As = As,empQuant = empQuant,Uni = Uni)
    if(GetSe){
      VarCov = .VarCovarCaviaR(pars = estPars,As = As,y = y,x = x,q = q,condVaR = condVaR,Uni = Uni)
      stdErr = sqrt(diag(VarCov))
      pval = pnorm(-abs(estPars)/stdErr)
    } else{
      stdErr = rep(NA,1,length(estPars))
      pval = rep(NA,1,length(estPars))
    }
    out = list(estPars = estPars, pval = pval, yLowFreq = y, yDate = yDate, condVaR = condVaR,
               quantile = q, As = As,Uni = Uni, simpleRet = simpleRet, Solvers = c(MainSolver,SecondSolver),
               fval = fval, conv = convergeFlag)
  }
  }
  return(out)
}

.VarCovarCaviaR <- function(pars, As, y, x, q, condVaR,Uni){
  T = length(y)
  resid <- y - condVaR
  SortedRes <- sort(abs(resid))
  if(q == 0.01){
    k = 40; bandwidth = SortedRes[40]
  }else if(q == 0.025){
    k = 50; bandwidth = SortedRes[50]
  } else if(q == 0.05){
    k = 60; bandwidth = SortedRes[60]
  } else{
    kk = median(abs(resid - median(resid)))
    hh = (T^(-1/3))*(qnorm(1 - 0.05/2)^2/3)*(((1.5*((dnorm(qnorm(q)))^2))/(2*(qnorm(q))^2 + 1)))^(1/3)
    bandwidth = kk * (qnorm(q + hh) - qnorm(q - hh))
  }
  D = matrix(0,ncol = length(pars), nrow = length(pars))
  A = D
  t = 0
  derivative1 = matrix(0,nrow = T, ncol = 1)
  derivative2 = matrix(0,nrow = T, ncol = 1)
  derivative3 = matrix(0,nrow = T, ncol = 1)
  derivative4 = matrix(0,nrow = T, ncol = 1)
  if(Uni){
    if(!As){
      gradient = matrix(0,nrow = T, ncol = length(pars))
      for(i in 2:T){
        derivative1[i] = 1 + pars[1] * derivative1[i-1]
        derivative2[i] = pars[2] * derivative2[i-1] + abs(y[i-1])
        derivative3[i] = pars[3] * derivative3[i-1] + condVaR[i-1]
        gradient[i,] = c(derivative1[i],derivative2[i],derivative3[i])
        A = A + gradient[i,] %*% t(gradient[i,])
        if(abs(resid[i]) <= bandwidth){
          t = t + 1
          D = D + gradient[i,] %*% t(gradient[i,])
        }
      }
    } else{
      gradient = matrix(0,nrow = T, ncol = length(pars))
      for(i in 2:T){
        derivative1[i] = 1 + pars[1] * derivative1[i-1]
        derivative2[i] = pars[2] * derivative2[i-1] + abs(y[i-1]) * (y[i-1] <= 0)
        derivative3[i] = pars[3] * derivative3[i-1] + abs(y[i-1]) * (y[i-1] > 0)
        derivative4[i] = pars[4] * derivative4[i-1] + condVaR[i-1]
        gradient[i,] = c(derivative1[i],derivative2[i],derivative3[i],derivative4[i])
        A = A + gradient[i,] %*% t(gradient[i,])
        if(abs(resid[i]) <= bandwidth){
          t = t + 1
        D = D + gradient[i,] %*% t(gradient[i,])
        }
      }
    }
  } else{
    derivative5 = matrix(0,nrow = T, ncol = 1)
    if(!As){
      gradient = matrix(0,nrow = T, ncol = length(pars))
      for(i in 2:T){
        derivative1[i] = 1 + pars[1] * derivative1[i-1]
        derivative2[i] = pars[2] * derivative2[i-1] + abs(y[i-1])
        derivative3[i] = pars[3] * derivative3[i-1] + x[i-1]
        derivative4[i] = pars[4] * derivative4[i-1] + condVaR[i-1]
        gradient[i,] = c(derivative1[i],derivative2[i],derivative3[i],derivative4[i])
        A = A + gradient[i,] %*% t(gradient[i,])
        if(abs(resid[i]) <= bandwidth){
          t = t + 1
          D = D + gradient[i,] %*% t(gradient[i,])
        }
      }
    } else{
      gradient = matrix(0,nrow = T, ncol = length(pars))
      for(i in 2:T){
        derivative1[i] = 1 + pars[1] * derivative1[i-1]
        derivative2[i] = pars[2] * derivative2[i-1] + abs(y[i-1]) * (y[i-1] <= 0)
        derivative3[i] = pars[3] * derivative3[i-1] + abs(y[i-1]) * (y[i-1] > 0)
        derivative4[i] = pars[4] * derivative4[i-1] + x[i-1]
        derivative5[i] = pars[5] * derivative5[i-1] + condVaR[i-1]
        gradient[i,] = c(derivative1[i],derivative2[i],derivative3[i],derivative4[i],derivative5[i])
        A = A + gradient[i,] %*% t(gradient[i,])
        if(abs(resid[i]) <= bandwidth){
          t = t + 1
          D = D + gradient[i,] %*% t(gradient[i,])
        }
      }
    }
  }
  tStdError = t
  A = A/T
  D = D/(2*bandwidth*T)
  VCmatrix = (q * (1-q)) * (solve(D) %*% A %*% solve(D)) * 1/T
  return(VCmatrix)
}