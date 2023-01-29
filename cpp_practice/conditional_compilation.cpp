#include <iostream>

// #define PRINT_ARIEL
#define PRINT_DONT


int main(void) {

    #ifdef PRINT_ARIEL
    std::cout << "Ariel"<< std::endl;
    #endif

    // #ifndef: 'if not defined'

    #ifdef PRINT_DONT // also can be written as #if defined(PRINT_ARIEL)
    std::cout << "Not Ariel" << std::endl;
    #endif

    #if 0
    std::out << "I wont compile because of #if 0 " << std::endl;

    #endif
}