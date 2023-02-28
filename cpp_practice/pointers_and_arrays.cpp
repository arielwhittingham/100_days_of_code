#include <iostream>
#include <algorithm>
#include <iterator>
// source: https://www.learncpp.com/cpp-tutorial/pointers-and-arrays/
// https://www.learncpp.com/cpp-tutorial/pointer-arithmetic-and-array-indexing/

using namespace std;

bool isVowel(char ch)
{
    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        return true;
    default:
        return false;
    }
}

int main() {
    int test_array[5] {1,2,3,4,5};

    // print address of first
    cout << "Same value for both the adddress of the first item in the arrray and the array itself"<< endl;
    cout << "Address of the first item: " <<&test_array[0] << endl;
    cout <<  "Value of array decays to: " << test_array << endl;

    // The array is of type “int[5]”, and its “value” is the array elements themselves. 
    // A pointer to the array would be of type “int*”, and its value would be the address of the first element of the array.

    int* ptr {test_array}; // this pointer is now pointing at the array

    //arrays passed to functions are always passed as pointers

    int value{ 7 };
    int* ptrv{ &value }; // pointer to 7

    std::cout << ptr << '\n'; // these print out sequential memory addresses separated by 4 bytes(scaling)
    std::cout << ptr+1 << '\n';
    std::cout << ptr+2 << '\n';
    std::cout << ptr+3 << '\n';
    
    /*
    0x16d7eaeb0
    0x16d7eaeb4
    0x16d7eaeb8
    0x16d7eaebc
    */



    char name[]{ "Mollie" };

    // walk through all the elements of name and count how many calls to isVowel return true
    auto numVowels{ std::count_if(std::begin(name), std::end(name), isVowel) };

    std::cout << name << " has " << numVowels << " vowels.\n";

    int name_length {std::size(name)};
    std::count_if(name, name + name_length, isVowel); // name is a pointer to the first element. Name + name_length is the pointer to first element 
                                                       //through last element , via name_length
                                                       

    return 0;



}