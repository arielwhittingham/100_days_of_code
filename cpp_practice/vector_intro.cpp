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

    // vector length

    std::cout <<  " vec size: " <<v4.size() << endl;

    // vector resizing

    /*
        // vector resizing
    */
    v4.resize(2);
    std::cout <<  " vec resizedsize: " <<v4.size() << endl;

    /*
        // vector size-setting
    */
    std::vector<int> v5(5);

    /*



    When initializing a vector:

        Use brace initialization when you want to initialize the vector with specific values.
        Use parenthesis initialization when you want to initialize the vector to a specific size 
        (the values will be value initialized).
        
        std::vector a { 1, 2, 3 }; // allocate 3 elements with values 1, 2, and 3
        std::vector b { 3 }; // allocate 1 element with value 3
        std::vector<int> c ( 3 ); // allocate 3 elements with values 0, 0, and 0
        std::vector<int> d ( 3, 4 ); // allocate 3 elements with values 4, 4, and 4
    
    */


    return 0;


}