#include <iostream>
// type name_of_function (parameters, parameters...){
// statements
// }
// type: Type of variable the function will return
// name_of_function: Name of the function that is used to call the function
// parameters: Inputs that the funtion will use. Identify data type followed by variable name. Seperate with , for more than one input.
// statements: Lines of code that will perform the function's task.

using namespace std;

// similar to python except instead of def you write the return type

int square(int n) {
    return n * n;
}

int main(void) {
    int n;
    std::cin >> n;
    std::cout << square(n) << std::endl;

}
