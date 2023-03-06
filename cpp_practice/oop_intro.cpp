// source: https://www.learncpp.com/cpp-tutorial/welcome-to-object-oriented-programming/

#include <iostream>

using namespace std;

    class DateClass
    {
    public:
        int m_year {};
        int m_month {};
        int m_day {};

    void print() // defines a member function named print()
    {
        std::cout << m_year << '/' << m_month << '/' << m_day << std::endl;;
    }
    };

/*

In addition to holding data, classes (and structs) 
can also contain functions! Functions defined inside 
of a class are called member functions (or sometimes methods). 
Member functions can be defined inside or outside of the class 
definition. We’ll define them inside the class for now (for simplicity), 
and show how to define them outside the class later.
*/

int main () {

 // class declaration

    DateClass my_date {2022,1,1} ;

    my_date.print();

}