// source: https://www.learncpp.com/cpp-tutorial/pointers-to-pointers/
#include <iostream>


using namespace std;

int main () {
    int value { 5 };

    int* ptr { &value };
    std::cout << *ptr << '\n'; // Dereference pointer to int to get int value

    int** ptrptr { &ptr };
    std::cout << **ptrptr << '\n'; // dereference to get pointer to int, dereference again to get int value

    int** ptrptr { nullptr };

    // arrays of pointers
    int** array {new int*[10]}; // allocate an array of 10 int pointers (new allocates the memory)
    /**
     This works just like a standard 
     * dynamically allocated array, except the array elements are of type 
     “pointer to integer” instead of integer.
     * 
     */
    // multide

    

}

