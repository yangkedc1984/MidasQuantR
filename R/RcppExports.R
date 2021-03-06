# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#' @export
objFun_cav <- function(params, yr, Xr, q, As, empQuant, Uni = TRUE) {
    .Call('_MidasQuantR_objFun_cav', PACKAGE = 'MidasQuantR', params, yr, Xr, q, As, empQuant, Uni)
}

#' @export
condVaR_cav <- function(params, yr, Xr, As, empQuant, Uni = TRUE) {
    .Call('_MidasQuantR_condVaR_cav', PACKAGE = 'MidasQuantR', params, yr, Xr, As, empQuant, Uni)
}

C_GetIniParams_cav <- function(yr, Xr, q, As, empQuant, Uni = TRUE, numInitialsRand = 10000L) {
    .Call('_MidasQuantR_C_GetIniParams_cav', PACKAGE = 'MidasQuantR', yr, Xr, q, As, empQuant, Uni, numInitialsRand)
}

#' @export
objFunAL_cav <- function(params, yr, Xr, condmeanR, q, empQuant, As, Uni = FALSE) {
    .Call('_MidasQuantR_objFunAL_cav', PACKAGE = 'MidasQuantR', params, yr, Xr, condmeanR, q, empQuant, As, Uni)
}

#' @export
condVaRES_cav <- function(params, yr, Xr, empQuant, As, Uni = FALSE) {
    .Call('_MidasQuantR_condVaRES_cav', PACKAGE = 'MidasQuantR', params, yr, Xr, empQuant, As, Uni)
}

C_GetIniParamsAL_cav <- function(yr, Xr, condmeanR, QuantEst, q, empQuant, numInitialsRand, As, Uni = FALSE) {
    .Call('_MidasQuantR_C_GetIniParamsAL_cav', PACKAGE = 'MidasQuantR', yr, Xr, condmeanR, QuantEst, q, empQuant, numInitialsRand, As, Uni)
}

cavSim <- function(params, ResidSim, NegResidMean, y, condVaR, condES, As, Uni, Xsim) {
    .Call('_MidasQuantR_cavSim', PACKAGE = 'MidasQuantR', params, ResidSim, NegResidMean, y, condVaR, condES, As, Uni, Xsim)
}

#' @export
MidasBetaC <- function(nlag, param1, param2) {
    .Call('_MidasQuantR_MidasBetaC', PACKAGE = 'MidasQuantR', nlag, param1, param2)
}

#' @export
objFun_midas <- function(params, yr, Xr, Xr_neg, Xr_pos, q, beta2para = FALSE, As = FALSE) {
    .Call('_MidasQuantR_objFun_midas', PACKAGE = 'MidasQuantR', params, yr, Xr, Xr_neg, Xr_pos, q, beta2para, As)
}

#' @export
condVaR_midas <- function(params, Xr, Xr_neg, Xr_pos, beta2para = FALSE, As = FALSE) {
    .Call('_MidasQuantR_condVaR_midas', PACKAGE = 'MidasQuantR', params, Xr, Xr_neg, Xr_pos, beta2para, As)
}

C_GetIniParams_midas <- function(yr, Xr, Xr_neg, Xr_pos, q, numInitialsRand = 10000L, beta2para = FALSE, As = FALSE) {
    .Call('_MidasQuantR_C_GetIniParams_midas', PACKAGE = 'MidasQuantR', yr, Xr, Xr_neg, Xr_pos, q, numInitialsRand, beta2para, As)
}

#' @export
objFunAL_midas <- function(params, yr, condmeanR, Xr, Xr_neg, Xr_pos, q, beta2para = FALSE, As = FALSE) {
    .Call('_MidasQuantR_objFunAL_midas', PACKAGE = 'MidasQuantR', params, yr, condmeanR, Xr, Xr_neg, Xr_pos, q, beta2para, As)
}

#' @export
condVaRES_midas <- function(params, Xr, Xr_neg, Xr_pos, beta2para = FALSE, As = FALSE) {
    .Call('_MidasQuantR_condVaRES_midas', PACKAGE = 'MidasQuantR', params, Xr, Xr_neg, Xr_pos, beta2para, As)
}

C_GetIniParamsAL_midas <- function(yr, condmeanR, QuantEst, Xr, Xr_neg, Xr_pos, q, numInitialsRand, beta2para, As) {
    .Call('_MidasQuantR_C_GetIniParamsAL_midas', PACKAGE = 'MidasQuantR', yr, condmeanR, QuantEst, Xr, Xr_neg, Xr_pos, q, numInitialsRand, beta2para, As)
}

