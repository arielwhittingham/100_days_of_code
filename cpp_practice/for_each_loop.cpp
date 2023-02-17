#include <iostream>

// source; https://www.learncpp.com/cpp-tutorial/for-each-loops/
using namespace std;

int main() {
    // standard way of looping through array
    constexpr int scores[]{ 84, 92, 76, 81, 56 }; // dont explicitely declare size
    constexpr int numStudents{ std::size(scores) }; // calculate size 

    int maxScore{ 0 }; // keep track of our largest score
    for (int student{ 0 }; student < numStudents; ++student)
    {
        if (scores[student] > maxScore)
        {
            maxScore = scores[student];
        }
    }

    std::cout << "The best score was " << maxScore << '\n';

    /* 
    for each loop
    structure: 

    for (element_declaration : array)
        statement;
    */

    constexpr int fibonacci[]{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 }; // new array

    for(auto fib_num : fibonacci) { // use auto so c++ declares the type of each element
        std::cout << fib_num << endl; 
    }

    for(const auto& fib_num_ref : fibonacci) { // do it by reference so c++ doesnt make a copy, 
        std::cout << fib_num_ref << endl; // also const to make it more preformative
        
    }

    /*
    rewrite max with for each loop and reference
    */

    int new_scores[]{ 84, 92, 76, 81, 56 }; // dont explicitely declare size
    int new_max {0};
    for(const auto& score_ref : new_scores) {
        if(score_ref > new_max) {
            new_max = score_ref;
        }
    
    }
    std::cout << "New Max: "<<new_max << endl;


    return 0;
}