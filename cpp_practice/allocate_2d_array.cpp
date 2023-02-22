// C++ program to dynamically allocate
// the memory for 2D array in C++
// using new operator
#include <iostream>
using namespace std;
 
#define ROW_SIZE 2

struct Pair {
    int v;
    int p;
};

// Driver Code
int main()
{
    /*
    // Dimensions of the array
    int m {};
    cin>> m;
    int n {2}; //
 
    // Declare memory block of size M
    int** array = new int*[m];
 
    for (int i = 0; i < m; i++) {
 
        // Declare a memory block
        // of size n
        array[i] = new int[n];
    }
 
    // Traverse the 2D array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
 
            a[i][j] = ;
        }
    }
 
    // Traverse the 2D array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
 
            // Print the values of
            // memory blocks created
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
 
    // Delete the array created
    for (int i = 0; i < m; i++) // To delete the inner
                                // arrays
        delete[] a[i];
    delete[] a; // To delete the outer array
                // which contained the pointers
                // of all the inner arrays
 
    return 0;
    */
   int n;
   std::cin >> n;
   std::size_t size = n - 1;
   

    auto arr2d = new Pair [size][ROW_SIZE];

    for(int i {0}; i < size; i++) {
        arr2d[i][0].v = i + 2;
        arr2d[i][1].v = 0;
    }

    for(int y {0}; y < size; y++) {
        // print out the value and the prime boolean
        std::cout << "val: " << arr2d[y][0].v << " -- boolean prime: " << arr2d[y][0].p << std::endl;
    
    }

    return 0;

}
