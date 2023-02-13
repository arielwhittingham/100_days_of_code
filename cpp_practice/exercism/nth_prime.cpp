#include "nth_prime.h"
#include <iostream>
/*
Instructions:
Given a number n, determine what the nth prime is.

By listing the first six prime 
numbers: 2, 3, 5, 7, 11, and 13, 
we can see that the 6th prime is 13.

If your language provides methods in the standard 
library to deal with prime numbers, pretend they don't 
exist and implement them yourself.
*/

namespace nth_prime {


    int x {7};

    bool is_prime(int x) {
        int divisors {0};
        bool res {};
        int max = (x/2) + 1;
        for(int i{1}; i <= max; i++) {
            if(x % i == 0) {
                divisors +=1;
            }
            
            if(divisors > 1) {
                break;
            }

        }
        if (divisors == 1) {
            res = true;
        }
        else {
            res = false;
        }
        return res;
    }

    int nth(int inp) {
        int primes {0};
        int nums {0};

        do {
            nums++;
            if(is_prime(nums) == true) {
                primes +=1;                
            } 

        } while (primes != inp);
        return nums;
    }

} 