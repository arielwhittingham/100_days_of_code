#include <iostream>
#include <string>
#include <string_view>

// source: https://www.learncpp.com/cpp-tutorial/constructors/
// source: https://www.learncpp.com/cpp-tutorial/non-static-member-initialization/
// source: https://www.learncpp.com/cpp-tutorial/overlapping-and-delegating-constructors/
using namespace std;

class StringClass {

    /*
    Constructors
    
    A constructor is a special kind of class member function that is 
    automatically called when an object of that class is created. Constructors are 
    typically used to initialize member variables of the class to appropriate 
    user-provided values, or to do any setup steps necessary for the class to be 
    used (e.g. open a file or database).
    
    - Constructors must have the same name as the class (with the same capitalization)
    - Constructors have no return type (not even void)

    */

    private:
        std::string value {};
        int string_id {};

    public:
    /*
        StringClass() { // default constructor
            value = "Hello";
            string_id = 1;
        }
    */
        StringClass(std::string s = "Default Value" , int id=1) { // non-default constructor combined with default
            value = s;
            string_id = id;
        }

        //  all default parameters must follow any non-default parameters

        /* 
        StringClass("Non-default"); this will result in the non-default value for string and the default value for id 
        */

       // if private variables have a default value, then define a default constructor like this:
       //     StringClass() = default;

        int get_id() {
            return string_id;
        }

}; //ALWAYS CLOSE CLASS DEFINITION WITH ;




int main() {

    // when you create on object of the class without parameters then the default constructor is called

    StringClass str{}; // this calls the default version of the constructor

    StringClass str_non_default{"I am not a default value",55}; // this calls the non-default constructor

    std::cout  << "default id: " << str.get_id() << std::endl;
    std::cout << "non default id: " <<  str_non_default.get_id() << std::endl;

    
    class SomethingClass
    {
    private:
        int m_value1 {};
        double m_value2 {};
        char m_value3 {};
        const int m_array[5];

    // member initializer list
    public:
        SomethingClass()
            : m_value1{ 1 }, m_value2{ 2.2 }, m_value3{ 'c' }, m_array{} // Initialize our member variables
        {
            std::cout << "Initialized " << std::endl;
            
        }
        
        SomethingClass(int value1, double value2, char value3='c')
            : m_value1{ value1 },
              m_value2{ value2 },
              m_value3{ value3 },
              m_array{} // directly initialize our member variables
        {
            std::cout << "Initialized with variables" << std::endl;
            
        }
    };
    SomethingClass s{};
    
    /*

    Classes containing class members:

    A class may contain other class objects as member variables. By default, when the outer class is 
    constructed, the member variables will have their default constructors called. This happens before 
    the body of the constructor executes.
    This can be demonstrated thusly:


    class A
    {
    public:
        A() { std::cout << "A\n"; }
    };

    class B
    {
    private:
        A m_a; // B contains A as a member variable

    public:
        B() { std::cout << "B\n"; }
    };

    int main()
    {
        B b;
        return 0;
    }

    When variable b is constructed, the B() constructor is called. Before the body of the constructor executes, m_a is initialized, calling the class A default constructor. This prints “A”. Then control returns back to the B constructor, and the body of the B constructor executes.

    This makes sense when you think about it, as the B() constructor may want to use variable m_a -- so m_a had better be initialized first!

    The difference to the last example in the previous section is that m_a is a class-type. class-type members get initialized even if we don’t explicitly initialize them.

    In the next lesson, we’ll talk about how to initialize these class member variables.
    */

   // Non-static member initialization
   // Delegating constructors

   class Foo
        {
        private:

        public:
            Foo()
            {
                // code to do A // we want to do what is here without duplicating code
            }

            Foo(int value): Foo{} // use Foo() default constructor to do A
            {
                // code to do B
            }

        };

    class Employee {
        private:
            int m_id{};
            std::string m_name{}; /*private members*/

        public:
            Employee(int id=0, std::string_view name=""):          /* constructor 1 */
                m_id{ id }, m_name{ name }
            {
                std::cout << "Employee " << m_name << " created.\n";
            }

            // Use a delegating constructor to minimize redundant code
            

            Employee(std::string_view name) : Employee{ 0, name } /* constructor 2 */
            { }

            /*
            First, a constructor that delegates to another constructor is not allowed to do any member initialization 
            itself. So your constructors can delegate or initialize, but not both.

            Second, it’s possible for one constructor to delegate to another constructor, which delegates back to the 
            first constructor. This forms an infinite loop, and will cause your program to run out of stack space 
            and crash. You can avoid this by ensuring all of your constructors resolve to a non-delegating constructor.
            */
        };

        /*
        Using a normal member function for setup

        Because a constructor can only initialize or delegate, this leads to a 
        challenge if our default constructor does some common initialization. 
        
        define setup function and use it in two places

        */
       class Bar {
        private:
            int x {1}; 
            int y {2};
            int z {3};

            void setup() {
                std::cout << " setup code " << std::endl;
            }

       
       public:

       Bar() {
        setup();

       };
       
       Bar(int rand) {
        setup();

       };


    };  

    /*
    Resetting a class to default
         void reset()
            {
                // consider this a bit of magic for now
                *this = Foo{}; // create new Foo object, then use assignment to overwrite our implicit object
            }

    */
    


    return 0;
}