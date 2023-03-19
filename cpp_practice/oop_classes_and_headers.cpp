#include <iostream>

// source: https://www.learncpp.com/cpp-tutorial/class-code-and-header-files/

/*

Spearating declaration from implementation of classes

    C++ provides a way to separate the “declaration” portion of the 
    class from the “implementation” portion. This is done by defining the 
    class member functions outside of the class definition. To do so, simply 
    define the member functions of the class as if they were normal functions, 
    but prefix the class name to the function using the scope resolution operator 
    (::) (same as for a namespace).

*/
class Date
{
private:
    int m_year;
    int m_month;
    int m_day;

public:
    Date(int year, int month, int day);

    void SetDate(int year, int month, int day);

    int getYear() { return m_year; }
    int getMonth() { return m_month; }
    int getDay()  { return m_day; }
};

// Date constructor
Date::Date(int year, int month, int day)
{
    SetDate(year, month, day);
}

// Date member function
void Date::SetDate(int year, int month, int day)
{
    m_month = month;
    m_day = day;
    m_year = year;
}


// Class definitions in Header 
// SEE Data.cpp and Data.h
/*

Putting class definitions in a header file

    In the lesson on header files, you learned that you 
    can put function declarations inside header files in order to use 
    those functions in multiple files or even multiple projects. Classes 
    are no different. Class definitions can be put in header files in order 
    to facilitate reuse in multiple files or multiple projects. Traditionally, 
    the class definition is put in a header file of the same name as the 
    class, and the member functions defined outside of the class are put 
    in a .cpp file of the same name as the class.
*/