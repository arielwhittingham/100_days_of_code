#include <iostream>

using namespace std;

int main() {
    constexpr int birth_year {1900}; //ensures compile time constant 
    constexpr int birth_year_plus_one {birth_year + 1}; //ensures compile time constant // uses previously declared constant
    // if value not known at compile time, use const int ... instead


    return 0;

}