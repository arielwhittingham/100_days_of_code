#include <iostream>
#include <utility> // get the swap() function
#include <iterator>

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
    int smallest {};
    for(int x{0}; x < size - 1; x++) { // loop to 1 less than the size
        smallest = unsorted[x];
        for(int y{0}; y - x < size - 1; y++) {
            int current = unsorted[y];
            if(current < smallest) {
                swap(smallest,current);
            unsorted[x] = smallest;
            unsorted[y] = current;
            }
            
            

        }
        
        cout << smallest << endl;
    }

    return 0;

}