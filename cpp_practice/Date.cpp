//source: https://www.learncpp.com/cpp-tutorial/class-code-and-header-files/

#include "Date.h"

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


/*
Guidlines:

    For classes used in only one file that aren’t generally reusable, define them directly in the single .cpp file they’re used in.
    For classes used in multiple files, or intended for general reuse, define them in a .h file that has the same name as the class.
    Trivial member functions (trivial constructors or destructors, access functions, etc…) can be defined inside the class.
    Non-trivial member functions should be defined in a .cpp file that has the same name as the class.

    Default parameters for member functions should be declared in the class definition (in the header file), 
    where they can be seen by whomever #includes the header.

    Separating the class definition and class implementation is very common for libraries that
    you can use to extend your program. Throughout your programs, you’ve #included headers that 
    belong to the standard library, such as iostream, string, vector, array, and other. Notice that 
    you haven’t needed to add iostream.cpp, string.cpp, vector.cpp, or array.cpp into your projects. 
    Your program needs the declarations from the header files in order for the compiler to validate 
    you’re writing programs that are syntactically correct. However, the implementations for the classes 
    that belong to the C++ standard library are contained in a precompiled file that is linked in at the 
    link stage. You never see the code.

    Outside of some open source software (where both .h and .cpp files are provided), 
    most 3rd party libraries provide only header files, along with a precompiled library file. 
    There are several reasons for this: 1) It’s faster to link a precompiled library than to 
    recompile it every time you need it, 2) a single copy of a precompiled library can be shared 
    by many applications, whereas compiled code gets compiled into every executable that uses it 
    (inflating file sizes), and 3) intellectual property reasons (you don’t want people stealing your code).

    Having your own files separated into declaration (header) 
    and implementation (code file) is not only good form, it also makes creating your 
    own custom libraries easier. Creating your own libraries is beyond the scope of these tutorials, 
    but separating your declaration and implementation is a prerequisite to doing so.


*/