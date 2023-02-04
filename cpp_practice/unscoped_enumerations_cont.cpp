#include <iostream>
#include <string_view>
using namespace std;

// source: https://www.learncpp.com/cpp-tutorial/unscoped-enumeration-input-and-output/


enum Shapes: std::uint8_t // specify what type of base integer these are stored as
{
    circle,   // 0 - each item here is implicitely assigned an integral value 
    square,   // 1
    triangle, // 2
};

enum Cats 
{
    timi = -5,   
    noisy,   // -4 - adds 1 to this 
    black_kitty, // -3
};

constexpr std::string_view printer(Cats cat) { // use string_view instead of string tp print the string instead of string which has to copy it
    switch(cat) {
        case timi:  return "Timi";
        case noisy:  return "Noisy";
        default: return "No";

    }

}

int main () {
    Cats mine {timi};

    std::cout << timi <<endl;
    std::cout << timi + 1 <<endl;

    // printing enumerator names

    Cats pet {static_cast<Cats>(2)};
    pet  =  static_cast<Cats>(3); //changed from noisy to black kitty


    return 0;
}