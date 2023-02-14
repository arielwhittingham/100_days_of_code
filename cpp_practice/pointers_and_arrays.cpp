#include <iostream>


using namespace std;

int main() {
    int test_array[5] {1,2,3,4,5};

    // print address of first
    cout << "Same value for both the adddress of the first item in the arrray and the array itself"<< endl;
    cout << "Address of the first item: " <<&test_array[0] << endl;
    cout <<  "Value of array decays to: " << test_array << endl;
}