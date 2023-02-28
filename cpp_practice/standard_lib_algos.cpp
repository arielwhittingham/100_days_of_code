#include <algorithm>
#include <iostream>
#include <array>

/* 
source: https://www.learncpp.com/cpp-tutorial/introduction-to-standard-library-algorithms/ 
    - Inspectors -- Used to view (but not modify) data in a container. Examples include searching and counting.
    - Mutators -- Used to modify data in a container. Examples include sorting and shuffling.
    - Facilitators -- Used to generate a result based on values of the data members. 
          Examples include objects that multiply values, or objects that determine what order pairs of elements should be sorted in.
*/


using namespace std;

bool divisible_by_thirteen(int n) {
    if(n % 13 ==0) {
        return true;
    }
    return false;

};

int multply_by_two(int& x) {
    x *= 2;
    return x;
}

int main() {
    /*
    std::find searches for the first occurrence of a value in a container. 
    std::find takes 3 parameters: an iterator to the starting element in the sequence, 
    an iterator to the ending element in the sequence, and a value to search for. It returns an 
    iterator pointing to the element (if it is found) or the end of the container (if the element is not found).
    */


    std::array arr{ 13, 90, 99, 5, 40, 80 };
    

    int search{1}; // value to look for
    int replace{};

    // iterator that points to the found element
    auto found{std::find(arr.begin(), arr.end(), search)};

    std::cout << "pointer to the found element: " << found << std::endl;
    std::cout << "Value of the found element: " << *found << std::endl;
    std::cout << "arr.end(): " << arr.end() << std::endl;

    /*

    if the element is not found then the 
    arr.end() value is returned for the found variable (which is one past the last element o the array)
    
    */

   /*
   std::find_if()

   - Sometimes we want to see if there is a value in a container that matches some condition (e.g. a string that 
    contains a specific substring) rather than an exact value. In such cases, std::find_if is perfect.

   - The std::find_if function works similarly to std::find, but instead of passing in a specific value to 
   search for, we pass in a callable object, such as a function pointer (or a lambda, which we’ll cover later). 
   For each element being iterated over, std::find_if will call this function (passing the element as an argument to the function), and the 
   function can return true if a match is found, or false otherwise.

   
   */

    std::array check_array{1,2,3,4,5,6,7,8,19,26};

    auto found_div{ std::find_if(check_array.begin(),check_array.end(), divisible_by_thirteen)};

    if(found_div == check_array.end()) {
        std::cout << "none divisible by 13" << std::endl;

    }
    else {
            std::cout << "Value of found_div: " <<  *found_div << "Pointer to found_div: "  <<  found_div << std::endl;

    }

    /*
    std::count and std::count_if
    count occurences or count condition
    */

    auto count_if{ std::count_if(check_array.begin(),check_array.end(), divisible_by_thirteen)};
    
    std::cout << "Count of divisible by 13" << std::endl;

    std::array sort_array{10,2,3,45,6,0,8,19,26};
    std::sort(sort_array.begin(),sort_array.end(),std::greater{}); //or std::less{} which is default

    for(auto x: sort_array) {
        std::cout << x << std::endl;
    }

    /* 
    std::for_each
    need some kind of function that does something to each value
    */

    std::for_each(sort_array.begin(),sort_array.end(),multply_by_two) ;
    
    for(auto x: sort_array) {
        std::cout << x << std::endl;
    }





    return 0;
}