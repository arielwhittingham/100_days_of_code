#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

/*
source: https://www.learncpp.com/cpp-tutorial/introduction-to-lambdas-anonymous-functions/

This code searches through an array of strings looking for the first element that contains the substring “nut”. Thus, it produces the result:

Found walnut
And while it works, it could be improved.

The root of the issue here is that std::find_if requires that we pass it a function pointer. Because of that, we are forced to define a function that’s only going to be used once, that must be given a name, and that must be put in the global scope (because functions can’t be nested!). The function is also so short, it’s almost easier to discern what it does from the one line of code than from the name and comments.

Lambdas are anonymous functions

A lambda expression (also called a lambda or closure) allows us to define an anonymous function inside another function. The nesting is important, as it allows us both to avoid namespace naming pollution, and to define the function as close to where it is used as possible (providing additional context).

The syntax for lambdas is one of the weirder things in C++, and takes a bit of getting used to. Lambdas take the form:

[ captureClause ] ( parameters ) -> returnType
{
    statements;
}
The capture clause can be empty if no captures are needed.
The parameter list can be either empty or omitted if no parameters are required.
The return type is optional, and if omitted, auto will be assumed (thus using type deduction used 
to determine the return type). While we previously noted that type deduction for function return types should be avoided, 
in this context, it’s fine to use (because these functions are typically so trivial).
Also note that lambdas (being anonymous) have no name, so we don’t need to provide one.



*/
bool containsNut(std::string_view str)
{
    // std::string_view::find returns std::string_view::npos if it doesn't find
    // the substring. Otherwise it returns the index where the substring occurs
    // in str.
    return (str.find("nut") != std::string_view::npos);
}

int main()
{
    std::array<std::string_view, 4> arr{ "apple", "banana", "walnut", "lemon" };

    // Scan our array to see if any elements contain the "nut" substring
    auto found{ std::find_if(arr.begin(), arr.end(), containsNut) };

    if (found == arr.end())
    {
        std::cout << "No nuts\n";
    }
    else
    {
        std::cout << "Found " << *found << '\n';
    }

    return 0;
}