#include <iostream>
// source: https://www.learncpp.com/cpp-tutorial/the-hidden-this-pointer/

using namespace std;

class Simple
{
private:
    int m_id;

public:
    Simple(int id) // constructor
        : m_id{ id }
    {
    }

    void setID(int id) { // getters and setters
        m_id = id; 
    } 

    int getID() { 
        return m_id; 
    }
};

int main () {
    
    Simple simple{1};
    simple.setID(2);
    std::cout << simple.getID() << '\n';

    // The hidden *this pointer
    /*
    simple.setID(2);
    function call has two arguments:

    setID(&simple, 2); 

    void setID(int id) { 
        m_id = id; 
    }
    
    finally converted to this by the compiler:

    void setID(Simple* const this, int id) { 
        this->m_id = id; 
    }
    */

   // When the compiler compiles a non-static member function,
    // it implicitly adds a new parameter to the function 
    // named “this”. The this pointer is a hidden const pointer 
    // that holds the address of the object the member function 
    // was called on.
    /*

    This always points to the object being operated on:

        this->m_id = id
    
    resolves to:

        simple.m_id

    */
   


}