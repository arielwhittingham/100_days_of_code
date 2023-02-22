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



namespace sieve {
        
    #define ROW_SIZE 2

    struct Pair {
        int v;
        int p;
    };
    
        std::vector<int> primes(int n) {

                std::cin >> n;
                std::size_t size = n - 1;
                

                    auto arr2d = new Pair [size][ROW_SIZE];

                    for(int i {0}; i < size; i++) {
                        arr2d[i][0].v = i + 2;
                        arr2d[i][1].v = 0;
                    }

                    for(int y {0}; y < size; y++) {
                        // print out the value and the prime boolean
                        std::cout << "val: " << arr2d[y][0].v << " -- boolean prime: " << arr2d[y][0].p << std::endl;
                    
                    }

                    std::vector<std::vector<int>> vec2; // 2 d vec
                    std::vector<int> vec;
                return vec;
        }
}
        
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
                * @brief 
                * int main(){
                        std::vector<std::vector<int>> vec;
                        // add some data to vec
                        for(const auto &v: vec){    // the & is important otherwise you copy the inner vector
                            for(const auto &i: v){  
                                std::cout << i << ' ';
                            }
                            std::cout << '\n';
                        }
                        return 0;
                    }
                * 
                

                int iterator{2}; /// start multiplying each number by 2, then 3, 4 and so on and mark 
                        // each of those values off, {val, 0 or 1}, 1 means it is marked off
                
            int loop_val; // this will hold each prime number
            int multiplied_result {1}; // this will hold each prime number `loop_val * iterator` as the multiple
            
                
                
                for(auto& row: vect) {
                    std::cout<< "Here 0: " << std::endl;
                    loop_val = (row)[0];
                    std::cout<< "Here 1: " << std::endl;
                    if(row[1] == 0) {
                        multiplied_result = (int) row[0];
                        std::cout << "multiplied_result: " << multiplied_result << std::endl;
                        while(true) {
                                multiplied_result = loop_val * iterator;
                                std::cout << "multiplied_result: " << multiplied_result << std::endl;
                                int index_in_vextor = multiplied_result - 2;
                                std::cout << "Index in vector: " << index_in_vextor << std::endl;
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

    */