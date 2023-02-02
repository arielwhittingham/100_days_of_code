#include <iostream>

// source 
using namespace std;

int main() {
    int x {1};
    int y {2};
    int* p_old_way = &x;

    int* p_new_way { &y };

    int* p_null{};

    // get the type of pointers
    int j{ 4 };
	std::cout << typeid(&j).name() << std::endl;; // print the type of &j
    // prints out "Pi"
}