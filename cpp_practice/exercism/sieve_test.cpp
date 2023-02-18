#include <vector>
#include <iostream>
#include "sieve.h"

int main() {
    int inp{20};
    std::vector<int> result = sieve::primes(inp);   

    for(const auto& val: result) {
        std::cout <<  val << std::endl;
    }

}