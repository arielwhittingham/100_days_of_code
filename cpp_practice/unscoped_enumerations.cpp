#include <iostream>

using namespace std;

// source: https://www.learncpp.com/cpp-tutorial/unscoped-enumerations/

// one way to define a color code for examples:

constexpr int rrred {0};
constexpr int bbblue {1};
constexpr int gggreen {2};

//  you can also define a type alias called color

using Color =int;

constexpr Color rred {0};
constexpr Color bblue {1};
constexpr Color ggreen {2};

// using enumerations

enum ColorEnum
{
    red,
    green,
    blue, // optional trailing comma

};

enum ReasonCodes {
    success,
    fail_reason_1,
    fail_reason_2,
    fail_reason_3,
};


int main() {
    int color1 {red};
    int color2 {blue};

    //using alias
    Color color3 {rrred};
    Color color4 {bbblue};    // defined above as `using Color  = int;

    int color5 {rrred};
    int color6 {bbblue};    

    ColorEnum my_shirt_is { red };
    ColorEnum my_sock_is { blue };

    cout << my_shirt_is + my_shirt_is +my_sock_is << endl;

    ReasonCodes result {success}; // using ReasonCodes enum defined above

    if(result == success) {
        // do something
        return 0;

    }

    // best practice to put enumations inside a namespace scope or class

    

    

    

}

