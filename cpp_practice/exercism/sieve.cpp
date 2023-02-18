#include <iostream>
#include "sieve.h"
#include <vector>
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

namespace sieve {

        
        std::vector<int> primes(int n) {

            std::vector<std::vector<int>> vect;
            std::vector<int> return_vector;
            int vector_length_test = n - 2;

            // Create vector of vectors with each value as {val,0 or 1} i.e. true or false
            for(int it {0}; it < n-1; it++) {
                std::cout << "Here fist: "<< std::endl;
                std::cout <<  "IT: " <<it << std::endl;
                int val {it+2};
                std::vector<int> intermediate_vect = {val,0}; // first prime number (it) is 2 
                std::cout  << " index: " << it << std::endl;
                std::cout << val << std::endl;
                vect.push_back(intermediate_vect);
                std::cout << "Here: "<< std::endl;
            }

            int v_size {static_cast<int>(vect.size())};
            // std::cout << v_size << std::endl;

            // loop though vector and if any number is a multiple then mark it as 1

            // while()
            /*
            vect:
            {

            {1,0},
            {2,0},
            {3,0},
            {4,1)
            )
            // while(result <=n )
            inter = 2
            */
           int iterator{2}; /// start multiplying each number by 2, then 3, 4 and so on and mark 
                              // each of those values off, {val, 0 or 1}, 1 means it is marked off
            
           int loop_val; // this will hold each prime number
           int multiplied_result {1}; // this will hold each prime number `loop_val * iterator` as the multiple
           
        
            for(int indexer {0}; indexer < v_size; indexer ++) {
                if(vect[indexer][1] == 0) { // if value is prime
                    loop_val =  vect[indexer][0]; 
                    multiplied_result = loop_val;
                       while(true) {
                            multiplied_result = loop_val * iterator;
                            int index_in_vextor = multiplied_result - 2;
                            if(vect[index_in_vextor][0] <= n) { 
                                vect[index_in_vextor][1] = 1; // find this multiplied_result in the vector and set it as found i.e. :  {multiplied_result,1}.
                            }
                            else {
                                break;
                            }
                            iterator++;
                        }
                } 
            }
            
            for(int v =0;v < v_size;v++) {
                if(vect[v][1] == 0) {
                return_vector.push_back(vect[v][0]);
                }
            }
        
        return return_vector;
    }
}