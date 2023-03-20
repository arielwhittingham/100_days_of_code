// https://www.learncpp.com/cpp-tutorial/static-member-functions/

#include <iostream>

class Something
{
private:
    static int s_value;

};

int Something::s_value{ 1 }; // initializer, this is okay even though s_value is private since it's a definition

/*
Like static member variables, static member 
functions are not attached to any particular object. 
Here is the above example with a static member function accessor:

*/
class SomethingNew {
    private:
        static int s_value;
    public:
        static int getValue() { return s_value; } // static member function
    };


int SomethingNew::s_value{ 1 }; // initializer


// Example 3
class IDGenerator
{
private:
    static int s_nextID; // Here's the declaration for a static member

public:
     static int getNextID(); // Here's the declaration for a static function
};

// Here's the definition of the static member outside the class.  Note we don't use the static keyword here.
// We'll start generating IDs at 1
int IDGenerator::s_nextID{ 1 };

// Here's the definition of the static function outside of the class.  Note we don't use the static keyword here.
int IDGenerator::getNextID() { return s_nextID++; }



int main()
{
    // how do we access Something::s_value since it is private?

    std::cout << SomethingNew::getValue() << '\n';
    
    /*
    Because static member functions are not attached to a particular object, 
    they can be called directly by using the class name and the scope resolution
     operator. Like static member variables, they can also be called through 
     objects of the class type, though this is not recommended.
    */
   
     // Static member functions have no *this pointer
     // Static  member functions cannot access non-static members


    // Example 3
    for (int count{ 0 }; count < 5; ++count)
        std::cout << "The next ID is: " << IDGenerator::getNextID() << '\n';

    
    return 0;


}