#include <iostream>

// source: https://www.learncpp.com/cpp-tutorial/void-pointers/
using namespace std;


int main () {
    // declaring
    void* ptr; // ptr is a void pointer // can be pointed at any object type

    // has  to be cast before in can be dereferenced
    int value{ 5 };
    void* voidPtr{ &value };

    int* intPtr{ static_cast<int*>(voidPtr) }; // casted to int*

    std::cout << *intPtr << "\n"; // now you can dereference

}