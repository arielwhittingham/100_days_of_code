#include <iostream>

// source: https://www.learncpp.com/cpp-tutorial/goto-statements/
// goto statement expresses an unconditional jump 
// goto statement + statement label
// only use goto statement when trying to exist a multiply nested loop but not the function
using namespace std;

int main(void) {


    char c {};
again:
    std::cin >> c;
    std::cout << c << std::endl; // labels have to refer to a statement
    

    if(c != 'a') {
        std::cout << "Wrong Enter Again" <<std::endl;
        goto again; /// goto and statement labels must appear in the same function scope
    }





    return 0;

}
