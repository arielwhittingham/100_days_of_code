#include <iostream>
#include <utility> // get the swap() function
#include <iterator>
#include <algorithm> // for std::sort


//  source: https://www.learncpp.com/cpp-tutorial/sorting-an-array-using-selection-sort/

using namespace std;

int main () {
    
    int a{2};
    int b{1};
    if(a > b) {
        std::swap(a,b);
    }
    cout << " a: "<< a << " b: "<< b << endl; // values swapped
    /*
    selection sort rules:

    Starting at array index 0, search the entire array to find the smallest value
    Swap the smallest value found in the array with the value at index 0
    Repeat steps 1 & 2 starting from the next index
    */
    int unsorted[]{67,9,34,2,1,6,3,8,46,91,1001,20}; 


    constexpr int size{static_cast<int>(std::size(unsorted))};

    int sorted[size]{};
    int smallest_index {}; // index of the smallest number
    for(int current_index{0}; current_index < size - 1; current_index++) { // loop to 1 less than the size 
        smallest_index = current_index;

        for(int moving_index{current_index + 1}; moving_index < size; moving_index++) { // move through the rest of the array
            
            if(unsorted[moving_index] < unsorted[smallest_index]) {
                smallest_index = moving_index;
            }
            
        }
        swap(unsorted[current_index],unsorted[smallest_index]); // swap the subsequent items with the smallest in the remaining array 
    }
    for(int x{0}; x < size; x++) {
        std::cout << unsorted[x]<< std::endl;
    }

    return 0;

}