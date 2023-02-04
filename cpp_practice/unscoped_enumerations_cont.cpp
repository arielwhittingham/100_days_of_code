#include <iostream>

using namespace std;

// source: https://www.learncpp.com/cpp-tutorial/unscoped-enumeration-input-and-output/

enum Shapes 
{
    circle,   // 0 - each item here is implicitely assigned an integral value 
    square,   // 1
    triangle, // 2
};

enum Cats 
{
    timi = -5,   
    noisy,   // -4 - adds 1 to this 
    black_kitty, // -3
};

int main () {
    Cats mine {timi};

    std::cout << timi <<endl;
    std::cout << timi + 1 <<endl;
    return 0;
}