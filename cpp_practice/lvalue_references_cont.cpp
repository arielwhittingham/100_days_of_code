#include <iostream>
// source: https://www.learncpp.com/cpp-tutorial/lvalue-references/
using namespace std;

int main() {

    int x {5}; 
    int& ref {x}; // this is called "reference binding" - in this case x is the "referent"

    std::cout << " x: " << x << " ref: " << ref << std::endl;

    x++; // increment x by 1

    std::cout << "Increment just x by 1 then print out both x and ref " << std::endl;

    std::cout << " new x: " << x << " new ref: " << ref << std::endl;

}