#include <iostream>
#include <string>

using namespace std;

int main()
{
    // first type of loop
    for(int x = 0; x < 10; x++)
    {
        std::cout << x << std::endl;
    }

    // loop through array , less verbose

    std::cout << "looping through this array {3,4,5,6,7,8,9,0,100};" << std::endl; // 
    int arr[] = {3,4,5,6,7,8,9,0,100}; // loop through array
    for(int n : arr) // less verbose 
    {
        std::cout << n << std::endl;
    }
    
    std::cout << "Third way using a constant" << std::endl; // this in effect makes the n read-only
    for (const int& y : arr) // reference to n
    {
        std::cout << y << endl;

    }
} // namespace std

