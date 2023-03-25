// source: https://www.learncpp.com/cpp-tutorial/overloading-the-io-operators/
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
    // Since operator<< is a friend of the Point class, we can access Point's members directly.

    // std::ostream& out this parameter declaresthe output
    // out then is used the saem way that std::cout is used

    out << "Point(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ')'; // actual output done here

    return out; // return std::ostream so we can chain calls to operator<<
}

//overloading cin >>
// std::cin is of type std::istream



int main () {


     const Point point1{2.0, 3.0, 4.0};

    std::cout << point1 << '\n';


    return 0;
}