// source: https://www.learncpp.com/cpp-tutorial/introduction-to-operator-overloading/
// source: https://www.learncpp.com/cpp-tutorial/overloading-the-arithmetic-operators-using-friend-functions/
// source: https://www.learncpp.com/cpp-tutorial/overloading-operators-using-normal-functions/

#include <iostream>
using namespace std;

    // + operator does different things for strings and integers
    // this is an example of overloading
    // for classes we need to tell the compiler what to do for the + operator,
    
    // defind outside the body of the function

class Cents {
    private:
    int m_cents{};

    public: // cnstructor
    Cents(int cents)
        : m_cents{ cents }
    {

    }

    int getCents() const {  // access method
        return m_cents; 
    }
};

// note: this function is not a member function nor a friend function!
Cents operator+(const Cents& c1, const Cents& c2) // `operator+` declares behavior for the + operator
    {
        // use the Cents constructor and operator+(int, int)
        // we don't need direct access to private members here
        return Cents{ c1.getCents() + c2.getCents() };
    }

int main()
{
  Cents cents1{ 6 };
  Cents cents2{ 8 };
  Cents centsSum{ cents1 + cents2 };
  std::cout << "I have " << centsSum.getCents() << " cents.\n";

  return 0;
}
 

