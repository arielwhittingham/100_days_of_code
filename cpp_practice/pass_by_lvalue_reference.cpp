#include <iostream>

using namespace std;


void print_func(string s) {
    std::cout << s << std::endl; // this function takes a string and prints it
}

void print_func_by_reference(string& s) { // passing in a string reference instead
    std::cout << s << std::endl; 
}

void add_one(int& n) {
    n++;
}


int main() {

    string x { "Hello!\n" };

    print_func(x); // this passes the string as a copy (expensive to copy) and it is destroyed immediately

    print_func_by_reference(x); // less expensive bexcuase the reerence binding is cheap and no need to copy
    // references the actual x variable via reference not a copy of it

    int d { 5 };

    add_one(d); // increments by reference so d is modified 
    std::cout << d << endl;
 








}