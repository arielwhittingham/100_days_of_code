#include <iostream>
#include <vector>
#include <array>


// source https://www.learncpp.com/cpp-tutorial/an-introduction-to-stdarray/
using namespace std;

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




}