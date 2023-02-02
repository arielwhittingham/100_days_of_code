#include <iostream>

//  source: https://www.learncpp.com/cpp-tutorial/value-categories-lvalues-and-rvalues/
// rvalue lvalue reference: https://en.cppreference.com/w/cpp/language/value_category
// lvalues expressions are those that evaluate to variables or other identifiable objects that persist beyond the end of the expression.
// rvalues expressions are those that evaluate to literals or the returned value of functions and operators 
// that are discarded at the end of the expression. 


int main()
{
    int x{};

    // Assignment requires the left operand to be a modifiable lvalue expression and the right operand to be an rvalue expression
    x = 5; // valid: x is a modifiable lvalue expression and 5 is an rvalue expression
    /*
    5 = x; // error: 5 is an rvalue expression and x is a modifiable lvalue expression
    */

    return 0;
}