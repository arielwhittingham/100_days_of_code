#include <iostream>
#include "nth_prime.h"

int main() {

    bool r{};
    int n{};

    r = nth_prime::is_prime(7);
    n = nth_prime::nth(1);

    std::cout << r << std::endl;
    std::cout << n << std::endl;
    return 0;
}    