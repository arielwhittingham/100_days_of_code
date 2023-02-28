#include <iostream>

/*
source: https://www.learncpp.com/cpp-tutorial/function-pointers/
*/


int foo()
{
    return 5;
}


int goo()
{
    return 6;
}

using namespace std;

int main() {

/*
non-constant function pointer

fcnPtr is a pointer to a function that takes no arguments and returns an integer
The parentheses around *fcnPtr are necessary for precedence reasons, as int* fcnPtr() would be interpreted as a forward declaration for a function named fcnPtr that takes no parameters and returns a pointer to an integer.

To make a const function pointer, the const goes after the asterisk:

*/
    //non-constant
    int (*fcnPtr)();

    /* 
    Constant
    int (*const fcnPtr)();
    */

    //constant
    int (*fcnPtr)(){ &foo }; // fcnPtr points to function foo
    fcnPtr = &goo; // fcnPtr now points to function goo


    return 0;
}
