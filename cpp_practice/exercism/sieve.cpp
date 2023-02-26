#include <iostream>
#include "sieve.h"
#include <vector>
#include <array>
// source: https://exercism.org/tracks/cpp/exercises/sieve/edit

/*
Instructions
Use the Sieve of Eratosthenes to find all the primes from 2 up to a given number.

The Sieve of Eratosthenes is a simple, ancient algorithm for finding all 
prime numbers up to any given limit. It does so by iteratively marking as composite (i.e. not prime) the multiples of each prime, starting with the multiples of 2. It does not use any division or remainder operation.

Create your range, starting at two and continuing up to and 
including the given limit. (i.e. [2, limit])

The algorithm consists of repeating the following over and over:

take the next available unmarked number in your list (it is prime)
mark all the multiples of that number (they are not prime)
Repeat until you have processed each number in your range.

When the algorithm terminates, 
all the numbers in the list that 
have not been marked are prime.

The wikipedia article has a useful graphic that 
explains the algorithm: https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes

Notice that this is a very specific algorithm, and the tests don't check 
that you've implemented the algorithm, only that you've come up with the correct 
list of primes. A good first test is to check that you do not use division or remainder 
operations (div, /, mod or % depending on the language).*/

// vextors: https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways/

// https://stackoverflow.com/questions/36836643/stdvector-segmentation-fault-during-push-back
// https://stackoverflow.com/questions/60393716/segmentation-fault-when-using-vector-push-back-inside-of-certain-loops
// https://www.google.com/search?q=loop+through+2d+vector+c%2B%2B&sxsrf=AJOqlzWHSey4dNpK1zNjFKezmIGKztMdNQ%3A1676791013205&ei=5czxY7WVDIeEwbkP5byCiAQ&oq=loop+through+2d+vector&gs_lcp=Cgxnd3Mtd2l6LXNlcnAQARgBMgQIIxAnMgUIABCABDIJCAAQFhAeEPEEMgkIABAWEB4Q8QQyCQgAEBYQHhDxBDoKCAAQRxDWBBCwAzoGCAAQFhAeOgUIABCGA0oECEEYAFC5C1iAE2C8HmgBcAF4AIABR4gB9AKSAQE2mAEAoAEByAEIwAEB&sclient=gws-wiz-serp
// https://stackoverflow.com/questions/58981573/iteration-in-2d-vector-in-c
// https://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new
// https://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new/936709#936709


namespace sieve {
    
    struct Pair {
        int v;
        int p;
    };
    
        std::vector<int> primes(int n) { 

                   
                int size = n - 1;
                
                    Pair *arr_of_nums = new Pair[size];

                    for(int i {0}; i < size; i++) {
                        arr_of_nums[i].v = i+2;
                        arr_of_nums[i].p = 0;

                    }
                std::vector<int> vec;

                for(int index_in_original_array{0}; index_in_original_array < size; index_in_original_array++) {
                    int multiplier {2}; /* NEEDS TO BE ZEROES AFTER EVERY LOOP */
                    int multiplied_result {0}; /* NEEDS TO BE ZEROES AFTER EVERY LOOP */
                    if(arr_of_nums[index_in_original_array].p ==0) {// check if prime
                        int current_original_prime {arr_of_nums[index_in_original_array].v};
                        while(multiplied_result <= n) {
                            
                            multiplied_result = current_original_prime * multiplier;
                            if(multiplied_result <= n) {
                            // get index of multiplied_result
                            int index_of_multiplied_result = multiplied_result - 2;
                            arr_of_nums[index_of_multiplied_result].p = 1;
                            }
                            multiplier++;  
                        } 

                    }
                }

                for(int final_looper {0}; final_looper < size; final_looper++) {
                    if(arr_of_nums[final_looper].p == 0) {
                        vec.push_back(arr_of_nums[final_looper].v);
                    }
                }
                
                delete[] arr_of_nums;

                return vec;
        }
        
}