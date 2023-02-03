#include <iostream>

using namespace std;


// one way to define a color code for examples:

constexpr int red {0};
constexpr int blue {1};
constexpr int green {2};

//  you can also define a type alias called color

using Color =int;

constexpr Color rred {0};
constexpr Color bblue {1};
constexpr Color ggreen {2};

// using enumerations

int main() {
    int color1 {red};
    int color2 {blue};

    //using alias
    int color3 {rred};
    int color4 {bblue};

    
    

}

