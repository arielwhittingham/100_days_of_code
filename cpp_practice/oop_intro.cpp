// source: https://www.learncpp.com/cpp-tutorial/welcome-to-object-oriented-programming/
// source: https://www.learncpp.com/cpp-tutorial/public-vs-private-access-specifiers/

#include <iostream>
#include <string>
#include <iterator>

using namespace std;

class DateClass {
public:
    using SType = std::string; // type alias nested in class
    SType name {};
    int m_year {};
    int m_month {};
    int m_day {};


    void print() { // defines a member function named print() 
        
        std::cout << m_year << '/' << m_month << '/' << m_day << std::endl;;
    }
};

class DateClass2 {

/* these are private by default */

using SType = std::string; // type alias nested in class
SType name {};
int m_year {};
int m_month {};
int m_day {};


    void print() { // defines a member function named print() 
        
        std::cout << m_year << '/' << m_month << '/' << m_day << std::endl;;
    }
};

class MyString
{
    char* m_string; // we'll dynamically allocate our string here
    int m_length; // we need to keep track of the string length
};


class IntArray
{
private:
    int m_array[10]; // user can not access this directly any more
    int array_id {};

public:
    void setValue(int index, int value) // setter
    {
        // If the index is invalid, do nothing
        if (index < 0 || index >= std::size(m_array))
            return;

        m_array[index] = value;
    }
    int get_id() { // getter
        return array_id; 
        }

    void set_id(int id) { //setter
            array_id = id;
        }

    // Getters should return by value or const reference.


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

    DateClass my_date {"My_Date",2022,1,1} ;

    my_date.print(); // call the method

    std::string {"Hello - this is a class"}; //std::string is a class
                                             //this is how it is instantiated

    /*
    Public and Private access specifiers
    Members are private by default
    `public:` members eed to be declared explicitely

    Best practice:

    Best practice

    Make member variables private, and member functions public, 
    unless you have a good reason not to.
    
    Encapsulation using:
    IntArray {}
    */

   


}