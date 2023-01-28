// https://www.learn-cpp.org/en/Function_arguments_by_reference
// In C++ it is the same principle as in C. Assumingly you're 
// already know pointers and functions, so you are aware of that function arguments 
// are passed by value, which means they are copied in and out of functions. But what 
// if we pass pointers to values instead of the values themselves? This will enable us to give 
// functions control over variables and structures of the parent functions, 
// and not just a copy of them, thus directly reading and writing the original object.

// Let's say we want to write a function which increments a number by one, called addone. 


#include <iostream>
using namespace std;

struct point {
    int x;
    int y;
};

// function that increments a number by one, called addone. 
void addone(int *n) {
    (*n)++;    // when derefencing use parathesis if you're doing something to that value, i.e. ++
}

// function that moves each coordinate of a point by +1
 void move(point *p) {
    (*p).x++;
    (*p).y++;
    //or 
    // p->x++;
    // p->y++;
 }






int main(void) {

    // increment using addone
    int integer = 6;
    point pp;
    pp.x = 10;
    pp.y = 10;

    // addone 
    addone(&integer);
    
    // move 
    move(&pp);

    std::cout << "Addone: " << integer << std::endl;
    std::cout << "Move: (x, y)  " << pp.x << " "<< pp.y << std::endl;

}


