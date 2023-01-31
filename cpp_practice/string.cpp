#include <iostream>
#include <string>
#include <string_view>

using namespace std;

int main(void) {

    // initialize string using uniform
    std::string name {"Ariel"};
    std::cout << name << std::endl;


    std::string name_2{}; /// empty string 
    // std::cin >> name_2; // full name with whitespace
    // std::cout << name_2 << std::endl; //misses after whitespace

    std::getline(std::cin >> std::ws ,name_2); // std::cin >> std::ws: get cin, ignore leading whitespace

    std::cout << name_2 << std::endl;
    std::cout << "len: "<< name_2.length() << std::endl;  //.length() is a member functions of std::string 
    // use std::string_view for read only strings so as to not have to make copies of the string to memory..?

}
