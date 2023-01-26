#include <iostream>
#include <string>


// Write a program that takes an output and spits it back out
// https://www.learn-cpp.org/en/Strings
using namespace std;

int main() 
{
    string stringvar;

    std::getline(cin, stringvar);
    
    std::cout << stringvar << std::endl;

}