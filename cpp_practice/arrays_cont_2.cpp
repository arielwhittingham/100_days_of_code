#include <iostream>
#include <iterator> // for std::size
// source: https://www.learncpp.com/cpp-tutorial/arrays-part-ii/

void array_const(const int arr[]) { // this function can't change the value of array
    std::cout << arr[0] << std::endl;
    
}

using namespace std;

int main () {
    // ommitted length arrays let's the compiler set the length
    int array[]{1,2,3};

    enum OurNames{
        ariel,
        dayana,
        timi,
        count_of_us
    };

    int array_houshold_age[count_of_us]{};

    array_houshold_age[timi] = 2;

    std::cout << array_houshold_age[timi] << std::endl;
    
    // passing arrays to functions
    // arrays are passed by reference
    // if you want to ensure the ontents don't change pass as a constant 

    array_const(array);
    cout << std::size(array) << endl;

    constexpr int scores[]{ 84, 92, 76, 81, 56 };  // declare the size of the array as constant
    constexpr int numStudents{ static_cast<int>(std::size(scores)) };



}
