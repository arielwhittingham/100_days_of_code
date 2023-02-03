#include <iostream>

// source: https://www.learncpp.com/cpp-tutorial/switch-statement-basics/
using namespace std;


int main() {

    int x{9};

    switch (x) {
        case 1:    // these are referred to as case labels
            std::cout << "one" << std::endl;

        case 2:
            std::cout << "two" << std::endl;

        case 3:
            std::cout << "three" << std::endl;

        case 5:
            std::cout << "five" << std::endl;
        default:
            std::cout << "DEFAULT" << std::endl;
        } // end first switch blovk

    int y {5};
    switch (y) {     // start second switch block
        case 5:
            std::cout << "five" << std::endl; // once the condition is met, all other statements below will run, so you have to break or return 
        case 8:
            std::cout << "eight" << std::endl;
            break; // can use a break statement to exist switch
        }
        // no default so switch jsut continue here
        std::cout << "continue" << std::endl;
        return 0;
    
}
