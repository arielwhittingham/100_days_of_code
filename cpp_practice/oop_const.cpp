
#include <iostream>

// source: https://www.learncpp.com/cpp-tutorial/const-class-objects-and-member-functions/

// const classes
/*
    Const class objects so the member variables never change 
    after declaration
    const ClassName cls {1,2}; // a dn and 2 can never be re-declared

*/

// const member functions (only works for constr objects..? unclear)
/*
    A const member function is a member function 
    that guarantees it will not modify the object 
    or call any non-const member functions 
    (as they may modify the object).

    To make getValue() a const member function, 
    we simply append the const keyword to the 
    function prototype, after the parameter list, 
    but before the function body:
*/

/*

Best Practice:

    Make any member function that 
    does not modify the state of the 
    class object const, so that it can 
    be called by const objects.


*/

class Something
{
public:
    int m_value {};

    Something() // constructor
        : m_value{0} 
        {
        }

    void resetValue() { 
        m_value = 0; 
    }

    void setValue(int value) { 
        m_value = value; 
    }

    int getValue() const { // note addition of const keyword after parameter list, 
                           // but before function body 
        return m_value; 
    } 
};

/*
Const objects via pass by const reference:

    Although instantiating const class objects is 
    one way to create const objects, a more common way to get a 
    const object is by passing an object to a function by const reference.


    To recap, passing a class argument by value causes a copy of the class to 
    be made (which is slow) -- most of the time, we don’t need a copy, a reference 
    to the original argument works just fine, and is more performant because it avoids 
    the needless copy. We typically make the reference const in order to ensure the function 
    does not inadvertently change the argument, and to allow the function to work with R-values 
    (e.g. literals), which can be passed as const references, but not non-const references.
*/

// Static member variables

/*

https://www.learncpp.com/cpp-tutorial/static-member-variables/

Review of static keyword uses

In the lesson on file scope and the static keyword, (https://www.learncpp.com/cpp-tutorial/43-file-scope-and-the-static-keyword/)
you learned that static variables keep their values 
and are not destroyed even after they go out of scope. For example:

#include <iostream>

int generateID()
{
    static int s_id{ 0 };
    return ++s_id;
}

int main()
{
    std::cout << generateID() << '\n';
    std::cout << generateID() << '\n';
    std::cout << generateID() << '\n';

    return 0;

    INITIALIZER ONLY EXECUTED ONCE

}
*/
class SomethingTwo
{
public:
    static inline int m_value{ 1 };
    /*
    Because s_value exists independently of any class objects, 
    it can be accessed directly using the class name and the scope
    resolution operator (in this case, Something::s_value):
    */
};

class SomethingThree
{
private:
    static inline int s_idGenerator { 1 }; // C++17
//  static int s_idGenerator;              // Use this instead for C++14 or older
    int m_id { };

public:
    SomethingThree()
    : m_id { s_idGenerator++ } // grab the next value from the id generator
    {}

    int getID() const { return m_id; }
};

// For C++14 or older, we have to initialize the non-const static member outside the class definition
// Note that we're defining and initializing s_idGenerator even though it is declared as private above.
// This is okay since the definition isn't subject to access controls.
// int Something::s_idGenerator { 1 }; // start our ID generator with value 1 (uncomment for C++14 or older)

int main()
{
    SomethingTwo first;
    SomethingTwo second;

    first.m_value = 2;

    // use this instead:
    //      Something::s_value = 2;
    // Access static members by class name (using the scope resolution operator) rather than through an object of the class (using the member selection operator).


    

    std::cout << first.m_value << '\n';
    std::cout << second.m_value << '\n';


    SomethingThree firstt;
    SomethingThree secondd;
    SomethingThree thirdd;

    std::cout << firstt.getID() << '\n';
    std::cout << secondd.getID() << '\n';
    std::cout << thirdd.getID() << '\n';
    return 0;

    return 0;
}



