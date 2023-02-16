#include <iostream>
// source: https://www.learncpp.com/cpp-tutorial/dynamic-memory-allocation-with-new-and-delete/
using namespace std;

int main () {
    //Dynamically allocating single variables
    // To allocate a single variable dynamically, we use the scalar (non-array) form of the new operator:
    new int; // immediately discards
    int * ptr{new int}; // dynamically allocate an integer and assign the address to ptr so we can access it later
    *ptr =  8;

    int* ptr2{ new int { 6 } }; // use uniform initialization
    cout << *ptr2 << endl;

    // return scalar memory by deleting and setting to null
    delete ptr2;
    ptr2 = nullptr;

    int* value {new (std::nothrow) int}; // assigns a null pointer if there is not enough memory to allocate
    if(!value) { // check if value is a null pointer
        std::cerr << "No memory allocated" << endl; 
    }

    // check before creating a new dynamic pointer
    if(!ptr) {
        ptr = new int;
    }

    return 0;
}
