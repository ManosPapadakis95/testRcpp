
#include <Rcpp.h>
#include "helpers.h"
#include "Str.h"
using namespace Rcpp;

//[[Rcpp::export]]
NumericVector generate_minstd_rand0_sequence(std::size_t length) {  // 1. minstd_rand0
    return Random::Rminstd_rand0<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector generate_minstd_rand_sequence(std::size_t length) {  // 2. minstd_rand
    return Random::Rminstd_rand<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector generate_mt19937_sequence(std::size_t length) {  // 3. mt19937
    return Random::Rmt19937<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector generate_mt19937_64_sequence(std::size_t length) {  // 4. mt19937_64
    return Random::Rmt19937_64<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector generate_ranlux24_base_sequence(std::size_t length) {  // 5. ranlux24_base
    return Random::Rranlux24_base<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector generate_ranlux48_base_sequence(std::size_t length) {  // 6. ranlux48_base
    return Random::Rranlux48_base<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector generate_ranlux24_sequence(std::size_t length) {  // 7. ranlux24
    return Random::Rranlux24<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector generate_ranlux48_sequence(std::size_t length) {  // 8. ranlux48
    return Random::Rranlux48<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector generate_knuth_b_sequence(std::size_t length) {  // 9. knuth_b
    return Random::Rknuth_b<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector generate_default_random_engine_sequence(std::size_t length) {  // 10. default_random_engine
    return Random::Rdefault_random_engine<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector generate_subtract_with_carry_engine_sequence(std::size_t length) {  // 14. subtract_with_carry_engine
    return Random::Rsubtract_with_carry_engine<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector generate_subtract_with_carry_engine_64_sequence(std::size_t length) {  // 15. subtract_with_carry_engine 64-bit
    return Random::Rsubtract_with_carry_engine<NumericVector>(length);
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
bool containsSubstring(std::string str, std::string substr) {
    return Str::containsSubstring(str, substr);
}

//[[Rcpp::export]]
std::string toUpperCase(std::string s) {
    return Str::toUpperCase(s);
}

//[[Rcpp::export]]
std::string trim(std::string s) {
    return Str::trim(s);
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