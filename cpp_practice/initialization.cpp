#include <iostream>

using namespace std;

int main(void) {
    int a;         // 1. no initializer (default initialization)
    int b = 5;     // 2. initializer after equals sign (copy initialization)
    int c( 6 );    // 3. initializer in parenthesis (direct initialization)

    // List initialization methods (C++11)
    int d { 7 };   // 4. initializer in braces (direct list initialization) //PREFERRED
    int e = { 8 }; // 5. initializer in braces after equals sign (copy list initialization)
    int f {};      // 6. initializer is empty braces (value initialization)


    // this will produce an error:
    // int width { 4.5 }; // error: a number with a fractional value can't fit into an int

    // 4 is the preferred way to initialize a variable

    int x{0}; // immediately using cout
    std::cout << x << std::endl;

    int y{};
    std::cin >> y;
    std::cout << "print y "<< y << std::endl;

}

