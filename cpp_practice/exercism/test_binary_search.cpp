#include <iostream>
#include <vector>
#include <array>
#include "binary_search.h"

int main() {


    std::vector<int> test_data {1, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377};
    int x = 111;
    // const std::vector<int> data {1, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377};

    size_t actual = binary_search::find(test_data, x);

    std::cout << actual << std::endl;
    
    
    return actual;
}

