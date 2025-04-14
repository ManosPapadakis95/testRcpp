
#include <Rcpp.h>
#include "helpers.h"
#include "Str.h"

//[[Rcpp::export]]
NumericVector Rminstd_rand(std::size_t length) {  // 2. minstd_rand
    return Random::Rminstd_rand<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector Rmt19937(std::size_t length) {  // 3. mt19937
    return Random::Rmt19937<NumericVector>(length);
}

//[[Rcpp::export]]
NumericVector Rknuth_b(std::size_t length) {  // 9. knuth_b
    return Random::Rknuth_b<NumericVector>(length);
}

//[[Rcpp::export(name = "Rminstd_rand.int")]]
IntegerVector Rminstd_rand_int(std::size_t length) {  // 2. minstd_rand
    return Random::Rminstd_rand<IntegerVector>(length);
}

//[[Rcpp::export(name = "Rmt19937.int")]]
IntegerVector Rmt19937_int(std::size_t length) {  // 3. mt19937
    return Random::Rmt19937<IntegerVector>(length);
}

//[[Rcpp::export(name = "Rknuth_b.int")]]
IntegerVector Rknuth_b_int(std::size_t length) {  // 9. knuth_b
    return Random::Rknuth_b<IntegerVector>(length);
}

//[[Rcpp::export]]
NumericVector Sample(NumericVector& input, std::size_t size, bool replace = false){
    return Random::sample<NumericVector>(input,size,replace);
}

//[[Rcpp::export(name = "Sample.int")]]
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

//[[Rcpp::export(name = "toTable.char")]]
std::map<std::string, double> toTable_char(std::string x){
    return Str::toTable(x);
}
