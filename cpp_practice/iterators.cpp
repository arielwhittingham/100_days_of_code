/* 
source: https://www.learncpp.com/cpp-tutorial/introduction-to-iterators/
*/

#include <iostream>
#include <array>

using namespace std;

int main() {
/*
    Iterators used to traverse containers, such as arrays
    Simple Iterator is a pointer:

*/    
    std::array data{1,2,3,4,5,6};

    /* Define start and end of the iterator */
    
    auto begin{ &data[0] };
    // note that this points to one spot beyond the last element
    auto end{ begin + std::size(data) };


    // for-loop with pointer
    for (auto ptr{ begin }; ptr != end; ++ptr) // ++ to move to next element
    {
        /*
        Dereference the pointer to print th value:
        */
        std::cout << *ptr << ' '; // Indirection to get value of current element

    }
    std::cout << '\n';

    /* 
    Use the begin and end functions to get these two values of
    the container 
    */

    auto beg{ data.begin()};
    auto ender{ data.end()};

    for (auto poi{ begin }; poi != end; ++poi) // ++ to move to next element.
    {
        std::cout << *poi << ' '; // Indirection to get value of current element.
    }

    #include <iterator> // For std::begin and std::end

    /*
    std::begin and std::end in:
    
    #include <iterator>
    
    */

        // Use std::begin and std::end to get the begin and end points.
    auto beginner{ std::begin(data) };


    auto endder{ std::end(data) };


    std::cout << '\n';


    

    return 0;
}