
#include <Rcpp.h>
#include "helpers.h"
#include "Str.h"

//[[Rcpp::export]]
NumericVector generate_minstd_rand_sequence(std::size_t length) {  // 2. minstd_rand
    return Random::Rminstd_rand<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector generate_mt19937_sequence(std::size_t length) {  // 3. mt19937
    return Random::Rmt19937<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector generate_knuth_b_sequence(std::size_t length) {  // 9. knuth_b
    return Random::Rknuth_b<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector sample(NumericVector& input, std::size_t size, bool replace = false){
    return Random::sample<NumericVector>(input,size,replace);
}

//[[Rcpp::export]]
IntegerVector sample_int(IntegerVector& input, std::size_t size, bool replace = false){
    return Random::sample<IntegerVector>(input,size,replace);
}

//[[Rcpp::export]]
bool startsWith(std::string str, std::string substr) {
    return Str::startsWith(str, substr);
}

//[[Rcpp::export]]
bool endsWith(std::string str, std::string substr) {
    return Str::endsWith(str, substr);
}

//[[Rcpp::export]]
std::string replaceSubstring(std::string s, std::string oldSubstr, std::string newSubstr) {
    return Str::replaceSubstring(s, oldSubstr, newSubstr);
}

//[[Rcpp::export]]
std::map<std::string, double> toTable_char(std::string x){
    return Str::toTable(x);
}
