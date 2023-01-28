#include <iostream>
#include <string>

using namespace std;

struct mystruct {
    int val;
    string name;
};

int main(void) {
    
    mystruct struct1; // define struct obj
    mystruct struct2;

    // set values
    struct1.name = "Ariel";
    struct2.name = "Dayana";
    struct1.val= 1;
    struct2.val= 2;

    std::cout << "Struct 1 name" << struct1.name << endl;
    std::cout << "Struct 2 val" << struct2.val << endl;

    
}