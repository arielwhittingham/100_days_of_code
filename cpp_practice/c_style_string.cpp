#include <iostream>
#include <string>
#include <iterator> // std::size
#include <cstring> // stdcpy and strcpy_s

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

    return 0;

}