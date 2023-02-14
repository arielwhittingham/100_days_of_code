#define __STDC_WANT_LIB_EXT1__ 1
#include <iostream>
#include <string> 
#include <string_view> // string_view
#include <iterator> // std::size
#include <cstring> // stdcpy and strncpy

// source: https://www.learncpp.com/cpp-tutorial/c-style-strings/

using namespace std;

int main() {

    // c style 
    char str_c[]{"C_String"}; // adds null terminator with ascii of 0
                              // impleneted as an array of characters

    char long_string[255]{};

    // to get up to that amount of characters in use: cin.getline(var,std::size(name))
    std::cin.getline(long_string,std::size(long_string));
    std::cout << long_string <<std::endl;

    char original[]{"copy"};
    char copy[50];

    std::strcpy(copy,original);

    std::cout << copy << std::endl;
    
    char original_new[]{"copy_new"};
    char copy_new[5]; 

    std::strncpy(copy_new, original_new,5);
    

    std::cout << copy_new << std::endl;


    // use string_view if you want to just read a string andnot update it
    // .remove_prefix(1) removes the first character in a string_view for the purpose of the string_view
    // also remove_suffix(2)
    return 0;

}