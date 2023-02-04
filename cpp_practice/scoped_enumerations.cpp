#include <iostream>


// source: https://www.learncpp.com/cpp-tutorial/scoped-enumerations-enum-classes/

// scopedenuerations are also called `enum classes`

using namespace std;

int main() {
/* 
    enum class Cats {
        timi,
        orange,
        noisy,
        black_kitty,
    };

    enum class Fruit {
        banana,
        orange,
        mango,
    }; 

    Cats c {std::Cats::orange}; 
    Fruit f {std::Fruit::orange};

    if(c==f) {
        std::cout << "Can be compared" << std::endl;     
    }
     */
    // std::cout  c << endl;
    // std::cout << f << endl;

    enum class Color // "enum class" defines this as a scoped enumeration rather than an unscoped enumeration
    {
        red, // red is considered part of Color's scope region
        blue,
    };

    enum class Fruit
    {
        banana, // banana is considered part of Fruit's scope region
        apple,
    };

    Color color { Color::red }; // note: red is not directly accessible, we have to use Color::red
    Fruit fruit { Fruit::banana }; // note: banana is not directly accessible, we have to use Fruit::banana

    if (color == fruit)  // compile error: the compiler doesn't know how to compare different types Color and Fruit
        std::cout << "color and fruit are equal\n";
    else
        std::cout << "color and fruit are not equal\n";

    


    return 0;
}