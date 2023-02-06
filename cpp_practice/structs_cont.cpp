#include <iostream>

// source: https://www.learncpp.com/cpp-tutorial/struct-aggregate-initialization/

using namespace std;

struct Cat {
    string name {};
    int age {};
};

int main () {

    Cat timi;
    Cat noisy;

    timi.age = 2;
    noisy.name = "Noisy";

    // aggregate initialization
    // aggregate data types can contain multiple data members
    // in c++ they are class, union, arrays along ith other characteristics

    Cat black_kitty {.name= "BlackKitty", .age = 2}; // aggregate initialization use the .notation

    // update like so
    black_kitty = {.name = black_kitty.name, .age = 3}; // updated value

    std::cout << black_kitty.age << std::endl;
    std::cout << noisy.age << std::endl; // default initialized to







}
