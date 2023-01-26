#include <iostream>
#include <string>

// loop through an array of numbers and for each, print
// out something if it satisfies a given ondition
// https://www.learn-cpp.org/en/if-else
// Child ( < 20 years old ) Adult ( >= 20 and < 60 years old) Retired ( >= 60 years old)



using namespace std;

int main()
{
    int age[] ={16,48,72,66,23};
    // get the length of the array dynamically
    int len = sizeof(age) / sizeof(age[0]);

    for(int x = 0; x < len; x++)
    {
        if(age[x] < 20) 
        {
            std::cout << "Child" << std::endl;
        }
        else if (age[x] >= 20 && age[x] < 60)
        {
            std::cout << "Adult" << std::endl;
        }
        else
        {
            std::cout << "Retired" << std::endl;
        }
    }
}
