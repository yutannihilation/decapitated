// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// chrome_connect
SEXP chrome_connect(std::string url);
RcppExport SEXP decapitated_chrome_connect(SEXP urlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type url(urlSEXP);
    rcpp_result_gen = Rcpp::wrap(chrome_connect(url));
    return rcpp_result_gen;
END_RCPP
}
// instrument
std::string instrument(SEXP ws_ptr, std::string cmd);
RcppExport SEXP decapitated_instrument(SEXP ws_ptrSEXP, SEXP cmdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ws_ptr(ws_ptrSEXP);
    Rcpp::traits::input_parameter< std::string >::type cmd(cmdSEXP);
    rcpp_result_gen = Rcpp::wrap(instrument(ws_ptr, cmd));
    return rcpp_result_gen;
END_RCPP
}