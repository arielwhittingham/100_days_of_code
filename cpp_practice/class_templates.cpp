#include <iostream>
#include <utility>

using namespace std;

// if you wanted to make an overloaded struct with different types

template <typename T >

struct Pair {
    T x;
    T y;
};

template <typename U >

U funct(U x) {
    return x*2;
}

int main() {

    Pair<int> g; // instantiated just like when calling a templated function
    g.x= 1;
    g.y= 2;

    // using the standard library pair for the pair of data

    std::pair<int, int> pair_1  {1,4};

    

}

