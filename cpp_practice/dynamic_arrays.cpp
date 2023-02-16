#include <iostream>

// source: https://www.learncpp.com/cpp-tutorial/dynamically-allocating-arrays/
using namespace std;

int main() {

    int inp{};
    std::cin >> inp;

    int* array{new int[inp]{}}; // dyanmicall allocate an array of ints based on cin

    array[0] = 5;

    delete[] array; // deallocate array[]

    auto* new_array{ new int[5]{ 9, 7, 5, 3, 1 } }; // dynamically aalocate array with values
    cout << new_array[0] << endl; // no need to dereference since the array already decays to a pointer.
    return 0;

}