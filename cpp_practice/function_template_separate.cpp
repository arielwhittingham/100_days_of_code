#include <iostream>
#include "sum_template.h"

using namespace std;

int main() {
    std::cout << summer<int>(2,9) << std::endl;

    // if the function had an issue resolving the types of the parameters
    // you can use the `auto` return type
}