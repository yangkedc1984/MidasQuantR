// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// objFun_cav
double objFun_cav(arma::colvec params, Rcpp::NumericVector yr, Rcpp::NumericVector Xr, double q, bool As, double empQuant, bool Uni);
RcppExport SEXP _MidasQuantR_objFun_cav(SEXP paramsSEXP, SEXP yrSEXP, SEXP XrSEXP, SEXP qSEXP, SEXP AsSEXP, SEXP empQuantSEXP, SEXP UniSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yr(yrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< bool >::type As(AsSEXP);
    Rcpp::traits::input_parameter< double >::type empQuant(empQuantSEXP);
    Rcpp::traits::input_parameter< bool >::type Uni(UniSEXP);
    rcpp_result_gen = Rcpp::wrap(objFun_cav(params, yr, Xr, q, As, empQuant, Uni));
    return rcpp_result_gen;
END_RCPP
}
// condVaR_cav
Rcpp::NumericVector condVaR_cav(Rcpp::NumericVector params, Rcpp::NumericVector yr, Rcpp::NumericVector Xr, bool As, double empQuant, bool Uni);
RcppExport SEXP _MidasQuantR_condVaR_cav(SEXP paramsSEXP, SEXP yrSEXP, SEXP XrSEXP, SEXP AsSEXP, SEXP empQuantSEXP, SEXP UniSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yr(yrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< bool >::type As(AsSEXP);
    Rcpp::traits::input_parameter< double >::type empQuant(empQuantSEXP);
    Rcpp::traits::input_parameter< bool >::type Uni(UniSEXP);
    rcpp_result_gen = Rcpp::wrap(condVaR_cav(params, yr, Xr, As, empQuant, Uni));
    return rcpp_result_gen;
END_RCPP
}
// C_GetIniParams_cav
NumericMatrix C_GetIniParams_cav(Rcpp::NumericVector yr, Rcpp::NumericVector Xr, double q, bool As, double empQuant, bool Uni, int numInitialsRand);
RcppExport SEXP _MidasQuantR_C_GetIniParams_cav(SEXP yrSEXP, SEXP XrSEXP, SEXP qSEXP, SEXP AsSEXP, SEXP empQuantSEXP, SEXP UniSEXP, SEXP numInitialsRandSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yr(yrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< bool >::type As(AsSEXP);
    Rcpp::traits::input_parameter< double >::type empQuant(empQuantSEXP);
    Rcpp::traits::input_parameter< bool >::type Uni(UniSEXP);
    Rcpp::traits::input_parameter< int >::type numInitialsRand(numInitialsRandSEXP);
    rcpp_result_gen = Rcpp::wrap(C_GetIniParams_cav(yr, Xr, q, As, empQuant, Uni, numInitialsRand));
    return rcpp_result_gen;
END_RCPP
}
// objFunAL_cav
double objFunAL_cav(arma::colvec params, Rcpp::NumericVector yr, Rcpp::NumericVector Xr, Rcpp::NumericVector condmeanR, double q, double empQuant, bool As, bool Uni);
RcppExport SEXP _MidasQuantR_objFunAL_cav(SEXP paramsSEXP, SEXP yrSEXP, SEXP XrSEXP, SEXP condmeanRSEXP, SEXP qSEXP, SEXP empQuantSEXP, SEXP AsSEXP, SEXP UniSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yr(yrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type condmeanR(condmeanRSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type empQuant(empQuantSEXP);
    Rcpp::traits::input_parameter< bool >::type As(AsSEXP);
    Rcpp::traits::input_parameter< bool >::type Uni(UniSEXP);
    rcpp_result_gen = Rcpp::wrap(objFunAL_cav(params, yr, Xr, condmeanR, q, empQuant, As, Uni));
    return rcpp_result_gen;
END_RCPP
}
// condVaRES_cav
Rcpp::List condVaRES_cav(arma::colvec params, Rcpp::NumericVector yr, Rcpp::NumericVector Xr, double empQuant, bool As, bool Uni);
RcppExport SEXP _MidasQuantR_condVaRES_cav(SEXP paramsSEXP, SEXP yrSEXP, SEXP XrSEXP, SEXP empQuantSEXP, SEXP AsSEXP, SEXP UniSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yr(yrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< double >::type empQuant(empQuantSEXP);
    Rcpp::traits::input_parameter< bool >::type As(AsSEXP);
    Rcpp::traits::input_parameter< bool >::type Uni(UniSEXP);
    rcpp_result_gen = Rcpp::wrap(condVaRES_cav(params, yr, Xr, empQuant, As, Uni));
    return rcpp_result_gen;
END_RCPP
}
// C_GetIniParamsAL_cav
NumericMatrix C_GetIniParamsAL_cav(Rcpp::NumericVector yr, Rcpp::NumericVector Xr, Rcpp::NumericVector condmeanR, Rcpp::NumericVector QuantEst, double q, double empQuant, int numInitialsRand, bool As, bool Uni);
RcppExport SEXP _MidasQuantR_C_GetIniParamsAL_cav(SEXP yrSEXP, SEXP XrSEXP, SEXP condmeanRSEXP, SEXP QuantEstSEXP, SEXP qSEXP, SEXP empQuantSEXP, SEXP numInitialsRandSEXP, SEXP AsSEXP, SEXP UniSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yr(yrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type condmeanR(condmeanRSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type QuantEst(QuantEstSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type empQuant(empQuantSEXP);
    Rcpp::traits::input_parameter< int >::type numInitialsRand(numInitialsRandSEXP);
    Rcpp::traits::input_parameter< bool >::type As(AsSEXP);
    Rcpp::traits::input_parameter< bool >::type Uni(UniSEXP);
    rcpp_result_gen = Rcpp::wrap(C_GetIniParamsAL_cav(yr, Xr, condmeanR, QuantEst, q, empQuant, numInitialsRand, As, Uni));
    return rcpp_result_gen;
END_RCPP
}
// cavSim
NumericVector cavSim(Rcpp::NumericVector params, Rcpp::NumericVector ResidSim, double NegResidMean, Rcpp::NumericVector y, Rcpp::NumericVector condVaR, Rcpp::NumericVector condES, bool As, bool Uni, Rcpp::NumericVector Xsim);
RcppExport SEXP _MidasQuantR_cavSim(SEXP paramsSEXP, SEXP ResidSimSEXP, SEXP NegResidMeanSEXP, SEXP ySEXP, SEXP condVaRSEXP, SEXP condESSEXP, SEXP AsSEXP, SEXP UniSEXP, SEXP XsimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ResidSim(ResidSimSEXP);
    Rcpp::traits::input_parameter< double >::type NegResidMean(NegResidMeanSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type condVaR(condVaRSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type condES(condESSEXP);
    Rcpp::traits::input_parameter< bool >::type As(AsSEXP);
    Rcpp::traits::input_parameter< bool >::type Uni(UniSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Xsim(XsimSEXP);
    rcpp_result_gen = Rcpp::wrap(cavSim(params, ResidSim, NegResidMean, y, condVaR, condES, As, Uni, Xsim));
    return rcpp_result_gen;
END_RCPP
}
// MidasBetaC
arma::mat MidasBetaC(int nlag, double param1, double param2);
RcppExport SEXP _MidasQuantR_MidasBetaC(SEXP nlagSEXP, SEXP param1SEXP, SEXP param2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nlag(nlagSEXP);
    Rcpp::traits::input_parameter< double >::type param1(param1SEXP);
    Rcpp::traits::input_parameter< double >::type param2(param2SEXP);
    rcpp_result_gen = Rcpp::wrap(MidasBetaC(nlag, param1, param2));
    return rcpp_result_gen;
END_RCPP
}
// objFun_midas
double objFun_midas(Rcpp::NumericVector params, Rcpp::NumericVector yr, Rcpp::NumericMatrix Xr, Rcpp::NumericMatrix Xr_neg, Rcpp::NumericMatrix Xr_pos, double q, bool beta2para, bool As);
RcppExport SEXP _MidasQuantR_objFun_midas(SEXP paramsSEXP, SEXP yrSEXP, SEXP XrSEXP, SEXP Xr_negSEXP, SEXP Xr_posSEXP, SEXP qSEXP, SEXP beta2paraSEXP, SEXP AsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yr(yrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr_neg(Xr_negSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr_pos(Xr_posSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< bool >::type beta2para(beta2paraSEXP);
    Rcpp::traits::input_parameter< bool >::type As(AsSEXP);
    rcpp_result_gen = Rcpp::wrap(objFun_midas(params, yr, Xr, Xr_neg, Xr_pos, q, beta2para, As));
    return rcpp_result_gen;
END_RCPP
}
// condVaR_midas
arma::colvec condVaR_midas(Rcpp::NumericVector params, Rcpp::NumericMatrix Xr, Rcpp::NumericMatrix Xr_neg, Rcpp::NumericMatrix Xr_pos, bool beta2para, bool As);
RcppExport SEXP _MidasQuantR_condVaR_midas(SEXP paramsSEXP, SEXP XrSEXP, SEXP Xr_negSEXP, SEXP Xr_posSEXP, SEXP beta2paraSEXP, SEXP AsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr_neg(Xr_negSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr_pos(Xr_posSEXP);
    Rcpp::traits::input_parameter< bool >::type beta2para(beta2paraSEXP);
    Rcpp::traits::input_parameter< bool >::type As(AsSEXP);
    rcpp_result_gen = Rcpp::wrap(condVaR_midas(params, Xr, Xr_neg, Xr_pos, beta2para, As));
    return rcpp_result_gen;
END_RCPP
}
// C_GetIniParams_midas
NumericMatrix C_GetIniParams_midas(Rcpp::NumericVector yr, Rcpp::NumericMatrix Xr, Rcpp::NumericMatrix Xr_neg, Rcpp::NumericMatrix Xr_pos, double q, int numInitialsRand, bool beta2para, bool As);
RcppExport SEXP _MidasQuantR_C_GetIniParams_midas(SEXP yrSEXP, SEXP XrSEXP, SEXP Xr_negSEXP, SEXP Xr_posSEXP, SEXP qSEXP, SEXP numInitialsRandSEXP, SEXP beta2paraSEXP, SEXP AsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yr(yrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr_neg(Xr_negSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr_pos(Xr_posSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type numInitialsRand(numInitialsRandSEXP);
    Rcpp::traits::input_parameter< bool >::type beta2para(beta2paraSEXP);
    Rcpp::traits::input_parameter< bool >::type As(AsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_GetIniParams_midas(yr, Xr, Xr_neg, Xr_pos, q, numInitialsRand, beta2para, As));
    return rcpp_result_gen;
END_RCPP
}
// objFunAL_midas
double objFunAL_midas(Rcpp::NumericVector params, Rcpp::NumericVector yr, Rcpp::NumericVector condmeanR, Rcpp::NumericMatrix Xr, Rcpp::NumericMatrix Xr_neg, Rcpp::NumericMatrix Xr_pos, double q, bool beta2para, bool As);
RcppExport SEXP _MidasQuantR_objFunAL_midas(SEXP paramsSEXP, SEXP yrSEXP, SEXP condmeanRSEXP, SEXP XrSEXP, SEXP Xr_negSEXP, SEXP Xr_posSEXP, SEXP qSEXP, SEXP beta2paraSEXP, SEXP AsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yr(yrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type condmeanR(condmeanRSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr_neg(Xr_negSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr_pos(Xr_posSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< bool >::type beta2para(beta2paraSEXP);
    Rcpp::traits::input_parameter< bool >::type As(AsSEXP);
    rcpp_result_gen = Rcpp::wrap(objFunAL_midas(params, yr, condmeanR, Xr, Xr_neg, Xr_pos, q, beta2para, As));
    return rcpp_result_gen;
END_RCPP
}
// condVaRES_midas
Rcpp::List condVaRES_midas(Rcpp::NumericVector params, Rcpp::NumericMatrix Xr, Rcpp::NumericMatrix Xr_neg, Rcpp::NumericMatrix Xr_pos, bool beta2para, bool As);
RcppExport SEXP _MidasQuantR_condVaRES_midas(SEXP paramsSEXP, SEXP XrSEXP, SEXP Xr_negSEXP, SEXP Xr_posSEXP, SEXP beta2paraSEXP, SEXP AsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr_neg(Xr_negSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr_pos(Xr_posSEXP);
    Rcpp::traits::input_parameter< bool >::type beta2para(beta2paraSEXP);
    Rcpp::traits::input_parameter< bool >::type As(AsSEXP);
    rcpp_result_gen = Rcpp::wrap(condVaRES_midas(params, Xr, Xr_neg, Xr_pos, beta2para, As));
    return rcpp_result_gen;
END_RCPP
}
// C_GetIniParamsAL_midas
NumericMatrix C_GetIniParamsAL_midas(Rcpp::NumericVector yr, Rcpp::NumericVector condmeanR, Rcpp::NumericVector QuantEst, Rcpp::NumericMatrix Xr, Rcpp::NumericMatrix Xr_neg, Rcpp::NumericMatrix Xr_pos, double q, int numInitialsRand, bool beta2para, bool As);
RcppExport SEXP _MidasQuantR_C_GetIniParamsAL_midas(SEXP yrSEXP, SEXP condmeanRSEXP, SEXP QuantEstSEXP, SEXP XrSEXP, SEXP Xr_negSEXP, SEXP Xr_posSEXP, SEXP qSEXP, SEXP numInitialsRandSEXP, SEXP beta2paraSEXP, SEXP AsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yr(yrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type condmeanR(condmeanRSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type QuantEst(QuantEstSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr_neg(Xr_negSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xr_pos(Xr_posSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type numInitialsRand(numInitialsRandSEXP);
    Rcpp::traits::input_parameter< bool >::type beta2para(beta2paraSEXP);
    Rcpp::traits::input_parameter< bool >::type As(AsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_GetIniParamsAL_midas(yr, condmeanR, QuantEst, Xr, Xr_neg, Xr_pos, q, numInitialsRand, beta2para, As));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MidasQuantR_objFun_cav", (DL_FUNC) &_MidasQuantR_objFun_cav, 7},
    {"_MidasQuantR_condVaR_cav", (DL_FUNC) &_MidasQuantR_condVaR_cav, 6},
    {"_MidasQuantR_C_GetIniParams_cav", (DL_FUNC) &_MidasQuantR_C_GetIniParams_cav, 7},
    {"_MidasQuantR_objFunAL_cav", (DL_FUNC) &_MidasQuantR_objFunAL_cav, 8},
    {"_MidasQuantR_condVaRES_cav", (DL_FUNC) &_MidasQuantR_condVaRES_cav, 6},
    {"_MidasQuantR_C_GetIniParamsAL_cav", (DL_FUNC) &_MidasQuantR_C_GetIniParamsAL_cav, 9},
    {"_MidasQuantR_cavSim", (DL_FUNC) &_MidasQuantR_cavSim, 9},
    {"_MidasQuantR_MidasBetaC", (DL_FUNC) &_MidasQuantR_MidasBetaC, 3},
    {"_MidasQuantR_objFun_midas", (DL_FUNC) &_MidasQuantR_objFun_midas, 8},
    {"_MidasQuantR_condVaR_midas", (DL_FUNC) &_MidasQuantR_condVaR_midas, 6},
    {"_MidasQuantR_C_GetIniParams_midas", (DL_FUNC) &_MidasQuantR_C_GetIniParams_midas, 8},
    {"_MidasQuantR_objFunAL_midas", (DL_FUNC) &_MidasQuantR_objFunAL_midas, 9},
    {"_MidasQuantR_condVaRES_midas", (DL_FUNC) &_MidasQuantR_condVaRES_midas, 6},
    {"_MidasQuantR_C_GetIniParamsAL_midas", (DL_FUNC) &_MidasQuantR_C_GetIniParamsAL_midas, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_MidasQuantR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
