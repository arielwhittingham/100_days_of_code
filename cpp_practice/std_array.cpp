#include <iostream>
#include <vector>
#include <array>


// source https://www.learncpp.com/cpp-tutorial/an-introduction-to-stdarray/
using namespace std;

template <typename T, std::size_t size >
int array_funct(const std::array<T,size>& arr) { // passing arrays of different lengths and types
    std::cout << arr.at(0) << endl;              // passing as an array reference instead of copying    
    return arr.at(0);
} 




int main () {

    /**
     * To address these issues, the C++ standard library includes functionality that makes array management easier, 
     * std::array and std::vector. We’ll examine std::array in this lesson, and std::vector in the next.
     * 
     */

    // declare array

    std::array<int, 3> myArray; // declare an integer array with length 3
    // length must be known at compile time

    std::array<int, 5> myArray2 { 9, 7, 5, 3, 1 }; // list initialization
    std::array myArray3 { 9.7, 7.31 }; // The type is deduced to std::array<double, 2>

    std::cout << myArray[1] << '\n';
    myArray[2] = 6;

    std::cout << "using array at:" << myArray2.at(1) << endl;

    std::cout << "pass to array function" << array_funct(myArray2) << endl;

    //looping through using size_t
    std::array myArray5 { 7, 3, 1, 9, 5 };
    for(std::size_t i {0}; i < myArray.size(); i++) {
        cout << myArray5[i] << endl;
    }





}