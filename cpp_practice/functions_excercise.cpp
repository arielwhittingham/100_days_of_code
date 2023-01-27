#include <iostream>
using namespace std;

// create a function that prints out the
// sum of the given variables, a, b, c.

int summer(int a, int b, int c) {
    return a + b + c;
}

int main(void) {
    int a = 1;
    int b = 4;
    int c = 3;
    
    std::cout << summer(a,b,c) << endl;
}

    
