#include "prime_factors.h"
#include <vector>
#include <iostream>
#include <functional>
#include <numeric>
#include <chrono>


/* 
https://exercism.org/tracks/cpp/exercises/prime-factors/edit

https://www.mathsisfun.com/prime-factorization.html

Example: What are the prime factors of 12 ?
It is best to start working from the smallest prime number, which 
is 2, so let's check:
12 ÷ 2 = 6
Yes, it divided exactly by 2. We have taken the first step!
But 6 is not a prime number, so we need to go further. Let's try 2 again:
6 ÷ 2 = 3
Yes, that worked also. And 3 is a prime number, so we have the answer:
12 = 2 × 2 × 3
As you can see, every factor is a prime number, so the answer must be right.
Note: 12 = 2 × 2 × 3 can also be written using exponents as 12 = 22 × 3
*/
namespace prime_factors {


//     bool is_prime(int& number) {

//             if (number != 2){
//         if (number < 2 || number % 2 == 0) {
//             return false;
//         }
//         for(int i=3; (i*i)<=number; i+=2){
//             if(number % i == 0 ){
//                 return false;
//             }
//         }
//     }
//     return true;
// }

bool is_prime(int& p) { // my function
        int divisors {0};
        
        int middle = (p / 2) + 1;
         for(int n {1}; n <= middle; n++) {
            if(p % n == 0 and n != p) {
                divisors += 1;
                if(divisors > 1) {
                    return false;
                }
            }

         }
        if(divisors == 1 and p >= 2) {
             return true;
        }
        else {
            return false;
        }
    }

    int prod_vector(std::vector<int> vec) { // product int vector
        int sum = 1;
        if(vec.size() == 0) {
            return 0;
        }
        else {
            for(int &v: vec) {
                sum *= v;
             }
        }
        return sum;
    }

    // primary function
    std::vector<int> of(int n) { // primary function

        /*

        4
        const std::vector<int> expected{2, 2};

        525
        const std::vector<int> expected{5, 5, 5, 5};

        901255
        const std::vector<int> expected{5, 17, 23, 461};
        plan:
            1. If n is prime,return n --DONE
            2. Get vector of primes up to n
        */

        std::vector<int> possible_primes_up_to_n{};
        
        std::vector<int> ret{}; // return vector
        // if n is prime, return n

        // n needs to be greater than 1
        if(n <= 1) {
            return ret;

        }

        if(is_prime(n)) {
            ret.push_back(n);
            return ret;
        }

        int middle {(n / 2) + 1};

        for(int p {2}; p <= middle; p++) {
            if(is_prime(p)) {
                possible_primes_up_to_n.push_back(p);
            }
        }

        // try each prime and then keep factoring until the result is prime
        int new_n {n};
        int vector_product {0};
        while(vector_product != n) {

            for(int i: possible_primes_up_to_n) {
                // std::cout << i << std::endl;
                if(new_n % i == 0) {
                    ret.push_back(i);
                    new_n /= i;
                    break;
                }
            }
                if (std::find(possible_primes_up_to_n.begin(), possible_primes_up_to_n.end(), new_n) != possible_primes_up_to_n.end()) {
                    ret.push_back(new_n);
                    break;
            }
        }

        // int sum = std::accumulate(ret.begin(), ret.end(), 1, std::multiplies<int>());
        // std::cout << sum << std::endl;
        // }
        // for(auto x : ret) {
        //     std::cout << x << std::endl;
        // }
        return ret;
    }

}