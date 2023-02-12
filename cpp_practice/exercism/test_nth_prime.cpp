#include <iostream>
#include "nth_prime.h"

int main() {

    bool r{};

    r = nth_prime::is_prime(5);
    std::cout << r << std::endl;
}    