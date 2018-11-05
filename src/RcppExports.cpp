// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// droplassoC
NumericVector droplassoC(const NumericMatrix& x, const NumericVector& y, const std::string& family, const double& keep_prob, const double& lambda, const NumericVector& binit, const double& gamma0, const double& decay, const unsigned& n_passes, const unsigned& minibatch_size);
RcppExport SEXP _droplasso_droplassoC(SEXP xSEXP, SEXP ySEXP, SEXP familySEXP, SEXP keep_probSEXP, SEXP lambdaSEXP, SEXP binitSEXP, SEXP gamma0SEXP, SEXP decaySEXP, SEXP n_passesSEXP, SEXP minibatch_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::string& >::type family(familySEXP);
    Rcpp::traits::input_parameter< const double& >::type keep_prob(keep_probSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type binit(binitSEXP);
    Rcpp::traits::input_parameter< const double& >::type gamma0(gamma0SEXP);
    Rcpp::traits::input_parameter< const double& >::type decay(decaySEXP);
    Rcpp::traits::input_parameter< const unsigned& >::type n_passes(n_passesSEXP);
    Rcpp::traits::input_parameter< const unsigned& >::type minibatch_size(minibatch_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(droplassoC(x, y, family, keep_prob, lambda, binit, gamma0, decay, n_passes, minibatch_size));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_droplasso_droplassoC", (DL_FUNC) &_droplasso_droplassoC, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_droplasso(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
