#include <iostream>
// Indirectly access and 
// modify the value of "n": 
//     - Create 2 pointers p1 and p2 for the given integer "n", 
//     - with p1 being the void pointer, 
//     - and p2 the int pointer. 
//     - p2 must be assigned to p1. 
//     - indirectly increase the value of 
//     n's content by 1 and print the value.

using namespace std;

int main(void) {
    int n = 1;

    void* p1;
    int* p2 = 0;

    p1 = &n;
    p2 = (int*)p1;
    *p2 += 1;

    cout << n << endl;
    


}

