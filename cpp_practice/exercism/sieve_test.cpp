#include <vector>
#include <iostream>
#include "sieve.h"

int main() {
    int inp{10};
    std::vector<int> result = sieve::primes(inp); 

    // for(const auto& val: result) { // for-each type loop
    //     std::cout <<  val << std::endl;
    // }
}