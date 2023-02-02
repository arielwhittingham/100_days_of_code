#include <iostream>

// source: https://www.learncpp.com/cpp-tutorial/lvalue-references/
// A reference is essentially identical to the object being referenced.
using namespace std;

int main() {

    /*
    int      // a normal int type
    int&     // an lvalue reference to an int object
    double&  // an lvalue reference to a double object
    */
    
    int x{ 5 }; // x is a regular integer
    int& ref { x }; // ref is an lvalue reference variable that can be used as an alias for x
    // similar to address of operator

    std::cout << "x : " << x << std::endl;
    std::cout << "ref : " << ref << std::endl;

    // address of distinction
    int* y = &ref;
    std::cout << "y, address of x : " << y << std::endl; // prints out the address of x - nothing to do with reference lvalues

    




}