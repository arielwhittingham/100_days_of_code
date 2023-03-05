#include "prime_factors.h"
#include <vector>
#include <iostream>

/* 
https://exercism.org/tracks/cpp/exercises/prime-factors/edit

https://www.mathsisfun.com/prime-factorization.html

*/
namespace prime_factors {

    bool is_prime(int p) {

        int divisors {0};
        
        int middle = (p / 2) + 1;
         for(int n {1}; n <= middle; n++) {
            if(p % n == 0 and n != p) {
                divisors += 1;
            }
            if(divisors > 1) {
                return false;
            }
         }
        if(divisors == 1 and p >= 2) {
             return true;
        }
        else {
            return false;
        }
    }

    std::vector<int> of(int n) {
        std::vector<int> ret{};

        return ret;
    }

}