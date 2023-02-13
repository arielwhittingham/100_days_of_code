#include <iostream>

using namespace std;

int main() {

    int m_array[2][2]{}; // initialized to zero


    int init_array[2][2]{
        {10,10},
        {10,10},
    }; // initialized to values

        int init_array_empty[3][4]{ // only the length (row) can be left empty
        {10,9}, // row 1: 10,9,0,0
        {10,1},
        {10,2}
    }; // initialized to values with some exmpty
    return 0;
}