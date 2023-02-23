#include <iostream>
#include <vector>


/* 
source:  https://www.learncpp.com/cpp-tutorial/an-introduction-to-stdvector/
 - Main differences from array length does not need to be declared at compile time
 - no need to declare length att all
 - no need to allocate and deallocate

*/

using namespace std;

int main() {

    /*

    Access:
    v[6] = 2; // no bounds checking
    v.at(7) = 3; // does bounds checking 

    */
   std::vector v4 { 9, 7, 5, 3, 1 };

    std::cout << v4.at(1) << endl;


    return 0;


}