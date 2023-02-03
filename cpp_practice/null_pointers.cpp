// source: https://www.learncpp.com/cpp-tutorial/introduction-to-pointers/
#include <iostream>

void func() {
    ;
}

int main() {

    int* ptr {}; // Declaring a null pointer

    int x {1};

    ptr = &x; // assign now to the address of x

    std::cout << *ptr << std::endl; // dereference ptr

    int* np {nullptr}; // always set the null pointer 

    if (np) {
        std::cout << "Not Null PTR"<< std::endl;    
    }
    else {
        std::cout << "Null PTR"<< std::endl;    
    }

    // pointer to const

    const int con{ 1 };
    const int* ptr_to_const { &con};


    // const pointer
    int h ={ 5 };
    int* const const_ptr{&h};

    return 0;


}


