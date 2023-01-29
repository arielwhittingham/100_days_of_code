#include <iostream>

// preprocessor links all files together and also processes include statements
// result is a translation unit, which then gets compiled by the compiler

// preprocessor directives start with #
// when the preprocessor runs it replaces the # with the ontents of a file called <iostream> for example
// directives never end with a seicolon ;

// #define identifier substitution_text
// ex.

#define MY_NAME "Ariel"

int main(void) {
    std::cout << MY_NAME << std::endl;
}