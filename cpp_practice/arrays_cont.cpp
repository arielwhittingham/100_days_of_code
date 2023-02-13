#include <iostream>
// source: https://www.learncpp.com/cpp-tutorial/arrays-part-i/
using namespace std;

struct Point {
    int x{};
    int y{};
};

int main() {


    // allocate an empty array of length 2
    int nums[20]{};
    nums[0] = 1;
    nums[1] = 2;

    Point points[5]{}; // array of 5 empty structs

    // get the length of an array                  //any element even if it is empty
    std::cout << " length: " << sizeof(nums)/sizeof(nums[3]) << std::endl;

    // using a macro 
    #define DAYS_IN_WEEK 7

    int week[DAYS_IN_WEEK]{};
    std::cout << " length of week: " << sizeof(week)/sizeof(week[3]) << std::endl;

    // for constants you have to use a compile time constant for the length of the array







}