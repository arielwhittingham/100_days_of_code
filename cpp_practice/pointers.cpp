#include <iostream>
using namespace std;

int main(void) {
// correct way to declare a pointer
// int *p = 0;
// set to zero for convention and safety

    int a =  10;
    int *b = 0;// the pointer variable     

    cout << "print pointer " << endl;
    cout << b << endl << endl;;

    b =  &a;

    cout << " Value b" << b << endl;
    cout << " Address of a " << &a << endl;
    cout << " Dereference b " << *b << endl;
    cout << " Value of a " << *b << endl;

    // void pointers
    void* p1;
    char* p2;
    // p2 = p1; Valid in C but not C++
    p2 = (char*) p1; // In C++ we have to typecast the pointer!

    // Also:
    // Constant pointer, in which the address pointed to cannot be changed.
    // Pointer to constant, in which the contents pointed to cannot be modified.



    // assign b to address of variable a


}