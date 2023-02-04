#include <iostream>
#include <typeinfo> 
// source: https://www.learncpp.com/cpp-tutorial/unscoped-enumerations/

using namespace std;

struct Fraction { // name structs with a Capital letter and not prefix/suffix
    int numerator {};
    int denominator {};
};


int main() {

    Fraction f{3,5};
    Fraction g = {3,5};

    std::cout << f.denominator << std::endl;
    std::cout << g.denominator << std::endl;
    std::cout << typeid(f).name() << std::endl; // get type 
    std::cout << typeid(f).name() << std::endl;

    return 0;
}