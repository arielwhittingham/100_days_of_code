#include <iostream>
// source: https://www.learncpp.com/cpp-tutorial/value-categories-lvalues-and-rvalues/
// glvalue, prvalue, xvalue, rvalue, lvalue move semantics
using namespace std;

int return5()
{
    return 5;
}


int main(void) {
    int xx { 5 };
    int yyy { xx }; // this is an lvalue (locator value, or left value)
    //  the expression xx is an lvalue expression as it evaluates to variable x (which has an identifier).

    int j{};
    const double d{};

    int y { j }; // j is a modifiable lvalue expression
    const double f { d }; // d is a non-modifiable lvalue expression

    int x{ 5 }; // 5 is an rvalue expression
    const double dd{ 1.2 }; // 1.2 is an rvalue expression

    int yy { x }; // x is a modifiable lvalue expression
    const double e { d }; // d is a non-modifiable lvalue expression
    int z { return5() }; // return5() is an rvalue expression (since the result is returned by value)

    int w { x + 1 }; // x + 1 is an rvalue expression
    int q { static_cast<int>(d) }; // the result of static casting d to an int is an rvalue expression
    // rvalues are temporary in assignment the left operand has to be a modifiable lvalue and the right operant
    // an rvalue
    return 0;


}



