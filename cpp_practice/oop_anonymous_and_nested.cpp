// source: https://www.learncpp.com/cpp-tutorial/anonymous-objects/
// https://www.learncpp.com/cpp-tutorial/nested-types-in-classes/
#include <iostream>

class Cents
{
private:
    int m_cents {};

public:
    Cents(int cents)
        : m_cents { cents }
    {

    }

    int getCents() const {
             return m_cents; 
        }
};

void print(const Cents& cents) // passed in main and then destroyed immediately after returning
{
   std::cout << cents.getCents() << " cents\n";
}


    // NESTED
    /*
    TYPES: Structs enums etc. can be nested within classes
    */

class Fruit
    {
    public:
        // Note: we've moved FruitType inside the class, under the public access specifier
        // We've also changed it from an enum class to an enum
        enum FruitType
        {
            apple,
            banana,
            cherry
        };

    private:
        FruitType m_type {};
        int m_percentageEaten { 0 };

    public:
        Fruit(FruitType type) //constructor
        :m_type { type }

        {
        }

        FruitType getType() const { 
                return m_type; 
            }

        int getPercentageEaten() const {
            return m_percentageEaten; 
        }
    };




int main()
{
    print(Cents{ 6 }); // Note: Now we're passing an anonymous Cents value

    
    //NESTED

    // Note: we access the FruitType via Fruit now
	Fruit apple { Fruit::apple };

	if (apple.getType() == Fruit::apple)
		std::cout << "I am an apple\n";
	else
		std::cout << "I am not an apple \n";
    
    return 0;


}