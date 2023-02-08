#include <iostream>


// source: https://www.learncpp.com/cpp-tutorial/function-templates/

// Functon templates relevant for overloaded functions, like an add() function that is declared for ints, 
// longs, and doubles, etc.

// using namespace std;

template <typename T> // define what the template is for and what the T is the placeholder of
                      // i.e. return and parameter type -- can also be class
T max(T x,T y) {
    return x * y;
}

int main() {
    // instantiate the function like this:
    int g{};
    g = max<int>(3, 4); // actual_type is some actual type, like int or double
    std::cout << g << std::endl;

    // the above implicitely creates this:
    
    /*
    template<>
    int max<int>(int x, int y) // the generated function max<int>(int, int)
    {
        return x * y;
    }
    */


}