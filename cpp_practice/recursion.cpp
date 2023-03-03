#include <iostream>
#include <vector>

// source: https://www.learncpp.com/cpp-tutorial/recursion/

/*

Recursive algorithms

Recursive functions typically solve a problem by first finding the solution to a subset of 
the problem (recursively), and then modifying that sub-solution to get to a solution. In the above 
algorithm, sumTo(value) first solves sumTo(value-1), and then adds the value of variable value to 
find the solution for sumTo(value).

In many recursive algorithms, some inputs produce trivial outputs. For example, sumTo(1) 
has the trivial output 1 (you can calculate this in your head), and does not benefit from further 
recursion. Inputs for which an algorithm trivially produces an output is called a base case. Base 
cases act as termination conditions for the algorithm. 
Base cases can often be identified by considering the output for an input of 0, 1, “”, ”, or null.
*/
using namespace std;

void count_down(int n) {
    std::cout << n << std::endl;
    if(n==0) { // base case
        return;
    }
    else {
        count_down(n - 1);
    }
}

int* f = new int;

int fib(int nth) {
    (*f)++;
    // print the nth fibonacci number 
    if(nth == 0 || nth == 1) {
        return nth;
    }
    else {
        std::cout << *f << std::endl;
        return fib(nth-1) + fib(nth-2);
    }

}

int fib_with_memo(int nth) {
    (*f)++;
    
    static vector<int> memo{0,1};
    if(nth < (static_cast<int>(memo.size()) - 1)) {
        return memo[nth];
    }
    else {
        std::cout << *f << std::endl;
        memo.push_back(fib_with_memo(nth-1) + fib_with_memo(nth-2));
        return memo[nth];
    }

}

int main() {
    

    // count_down(10);

    /*
    memoization algorithms
    */

   
   *f = 0;
    // int g = fib(10);

    int h = fib_with_memo(10);


    return 0;

}