#include <iostream>
#include <vector>
#include <array>
#include "binary_search.h"

int main() {


    const std::vector<int> data {1};
    // const std::vector<int> data {1, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377};

    int actual = binary_search::find(data, 1);

    std::cout << actual << std::endl;
    
    

    return actual;
}

