#include <iostream>
// Make a struct named "person":
//  name (should be string)
// age (should be int)
// do_programming (should be bool)
// declare two objects "p1" and "p2" of your structure's datatype
// set the values for "p1" as follows:
//  name: alice
//  age: 20
//  do_programming: true
// set the values for "p2" as follows:
//  name: bob
//  age: 18
//  do_programming: false
// print out "name (age)" => e.g. tim (23) by getting the values from your structure-objects
// https://www.learn-cpp.org/en/Structures

using namespace std;

struct person {
    string name;
    int age;
    bool do_programming;
};


int main(void) {
    person p1;
    person p2;

    // set values 

    p1.name = "alice";
    p1.age = 20;
    p1.do_programming = true;

    p2.name = "bob";
    p2.age = 18;
    p2.do_programming = false;

    // output

    std::cout << p1.name << " (" << p1.age << ")" << endl;
    std::cout << p2.name << " (" << p2.age << ")" << endl;


    

}