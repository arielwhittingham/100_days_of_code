#include <vector>
#include <iostream>

/*
source: https://www.learncpp.com/cpp-tutorial/stdvector-capacity-and-stack-behavior/

*/

using namespace std;

int main() {

    std::vector array_first { 0, 1, 2 };
    array_first.resize(5); // set length to 5

    std::cout << "The length is: " << array_first.size() << "\n";

    for (auto element: array_first) {
        std::cout << element << ' ';
    }

    /*
    Print vector capacity and size
    */
     std::vector<int> array{};
    array = { 0, 1, 2, 3, 4 }; // okay, array length = 5
    std::cout << "\n length: " << array.size() << "  capacity: " << array.capacity() << '\n';

    array = { 9, 8, 7 }; // okay, array length is now 3!
    std::cout << "length: " << array.size() << "  capacity: " << array.capacity() << '\n';

    /*
    using vector as a stack
    */
    
    std::vector<int> stack;

    stack.reserve(10); //set the capacity to a certain size
   


    return 0;
}