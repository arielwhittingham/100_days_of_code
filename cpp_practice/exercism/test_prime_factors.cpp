#include "prime_factors.h"
#include <iostream>
#include <chrono>


int main() {

    //Start Measuring 
    auto begin = std::chrono::high_resolution_clock::now();
    
    
    prime_factors::of(901255);

    // Stop measuring time and calculate the elapsed time
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);

    printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);
    return 0;

}