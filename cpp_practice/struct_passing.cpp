#include <iostream>

// souce: https://www.learncpp.com/cpp-tutorial/struct-passing-and-miscellany/
using namespace std;



struct Employee
{
    int id {};
    int age {};
    double wage {};
};

void print_employee_id(const Employee&  emp) { /// pass by constant reference
    std::cout << " print id: "<< emp.id << std::endl;

}

int main() {
    Employee e {1,2,20000};

    Employee* ee {&e};

    print_employee_id(e);

std::cout << " Verbose: "<< (*ee).id << std::endl;
std::cout << " Succinct: " << ee->id << std::endl; // member selection preferred way
    
    return 0;
}
