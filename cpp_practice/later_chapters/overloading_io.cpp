// source: https://www.learncpp.com/cpp-tutorial/overloading-the-io-operators/
// https://www.learncpp.com/cpp-tutorial/overloading-operators-using-member-functions/


/*
Rules for overloading:
    If you’re overloading assignment (=), subscript ([]), function call (()), or member selection (->), do so as a member function.
    If you’re overloading a unary operator, do so as a member function.
    If you’re overloading a binary operator that does not modify its left operand (e.g. operator+), do so as a normal function (preferred) or friend function.
    If you’re overloading a binary operator that modifies its left operand, but you can’t add members to the class definition of the left operand (e.g. operator<<, which has a left operand of type ostream), do so as a normal function (preferred) or friend function.
    If you’re overloading a binary operator that modifies its left operand (e.g. operator+=), and you can modify the definition of the left operand, do so as a member function

*/
#include <iostream>


class Point
{
private:
    double m_x{}; // m_ member variables convention
    double m_y{};
    double m_z{};

public:
    Point(double x=0.0, double y=0.0, double z=0.0)
      : m_x{x}, m_y{y}, m_z{z}
    {
    }

    friend std::ostream& operator<< (std::ostream& out, const Point& point);
};

/* 
    overloading << operator
    The left operand is the std::cout object, and the right operand is your Point class object. 
    std::cout is actually an object of type std::ostream. 
    Therefore, our overloaded function will look like this:

    // std::ostream is the type for object std::cout
        friend std::ostream& operator<< (std::ostream& out, const Point& point);

    */
// 1.obj      2.function  3. params
std::ostream& operator<< (std::ostream& out, const Point& point) {
    // std::ostream& out this parameter declares the output
    // out then is used the saem way that std::cout is used

    out << "Point(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ')'; // actual output done here

    return out; // return std::ostream so we can chain calls to operator<<
}

//overloading cin >>
// std::cin is of type std::istream

// member functions
class Cents
{
private:
    int m_cents {};

public:
    Cents(int cents)
        : m_cents { cents } { }

    // Overload Cents + int
    Cents operator+ (int value);

    int getCents() const { return m_cents; }
};

// note: this function is a member function!
//  implicit *this parameter:
//      operator+(&​cents1, 2)
Cents Cents::operator+ (int value)
{
    return Cents { m_cents + value }; // returns the Cents type
}

//------------------------
// https://www.learncpp.com/cpp-tutorial/overloading-unary-operators/
//     overloading unary operators
//------------------------
int main () {


   const Point point1{2.0, 3.0, 4.0};

    std::cout << point1 << '\n';

    Cents cents1 { 6 };
	Cents cents2 { cents1 + 2 };
	std::cout << "I have " << cents2.getCents() << " cents.\n";

    //  implicit *this parameter:
    //      operator+(&​cents1, 2)


    return 0;
}