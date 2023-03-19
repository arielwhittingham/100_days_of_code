
// source: https://www.learncpp.com/cpp-tutorial/lambda-captures/

#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

/*

The capture clause is used to (indirectly) give a 
lambda access to variables available in the surrounding 
scope that it normally would not have access to. All we 
need to do is list the entities we want to access from 
within the lambda as part of the capture clause. In this
case, we want to give our lambda access to the value of variable search, 
so we add it to the capture clause:
*/
int main()
{
  std::array<std::string_view, 4> arr{ "apple", "banana", "walnut", "lemon" };


    std::cout << "search for: ";

    std::string search{}; // use this variable to input the word we 
    // want to search the array for
    std::cin >> search;



  auto found{ std::find_if(arr.begin(), arr.end(),
                            [search](std::string_view str) // giving access to the 'search' via the capture caluse
                           {
                             return (str.find(search) != std::string_view::npos);
                           }) }; // only has access to things inside thiss scope not outside

/*
Thus, in the above example, when the lambda object 
is created, the lambda gets its own cloned variable 
named search. This cloned search has the same value as 
main‘s search, so it behaves like we’re accessing main‘s 
search, but we’re not.

To allow modifications of variables that were 
captured by value, we can mark the lambda as mutable. 
The mutable keyword in this context removes the const
 qualification from all variables captured by value.
    `mutable` keyord
```[ammo]() mutable { ```

use the default capture:

ex.

  auto found{ std::find_if(areas.begin(), areas.end(),
                [=](int knownArea) { // will default capture width and height by value
                    return (width * height == knownArea); // because they're mentioned here
                }) };


*/
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