#include <iostream>

using namespace std;


int main() {

    int x{9};

    switch (x) {
        case 1:    // these are referred to as case labels
            std::cout << "one" << std::endl;

        case 2:
            std::cout << "two" << std::endl;

        case 3:
            std::cout << "three" << std::endl;

        case 5:
            std::cout << "five" << std::endl;
        default:
            std::cout << "DEFAULT" << std::endl;


    }


    return 0;
}
