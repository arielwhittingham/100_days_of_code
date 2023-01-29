#include <iostream>

// within Namespace scope all identifyers must be unique

// Any name that is not defined inside a class, 
// function, or a namespace is considered to be part of an implicitly defined namespace called 
// the global namespace (sometimes also called the global scope).

int function_global(); // gloablly defined function

int f = 6; // globally defined variable s

int main(void){
    std::cout << f << std::endl;
}