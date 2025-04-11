#include <Rcpp.h>
#include "myClass.h"
using namespace Rcpp;


//[[Rcpp::includes(myClass.h)]]

//[[Rcpp::export]]
RandomNumberGenerator<double> create_rng_int() {
    return RandomNumberGenerator<double>();
}