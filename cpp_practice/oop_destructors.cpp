// source: https://www.learncpp.com/cpp-tutorial/destructors/

#include <iostream>
#include <cassert>
#include <cstddef>

using namespace std;

class IntArray {

    private:
        int* m_array {};
        int m_length {};
    
    public:
    IntArray(int length) { //constructor 
        assert(length >0);
        m_array = new int[static_cast<std::size_t>(length)]{};
        m_length = length;
    }

    ~IntArray () { // destructor
    // Dynamically delete the array we allocated earlier
		delete[] m_array;
    }
    
    void set_value (int ind, int val) {
        m_array[ind] = val;
    }
    
    int get_value(int ind) {

        return m_array[ind];
    }

    int get_length() {
        return m_length;

    }  

};


int main () {

    // destructors clean up resources:
    // (dynamic memory, or a file or database handle)
    /*
    Like constructors, destructors have specific naming rules:
        - The destructor must have the same name as the class, 
            preceded by a tilde (~).
        - The destructor can not take arguments.
        - The destructor has no return type.
    More:
        - A Class only has one destructor
        - you should not call a destructor explicitly 
            (as it will be called automatically when the object is destroyed)

    */
   IntArray i{5};
   std::cout << i.get_length()<<std::endl;

    return 0;
} // at the end of execution the object is destroyed with the destructor