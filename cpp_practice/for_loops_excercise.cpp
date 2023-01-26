#include <iostream>
#include <string>
 
// print even numbers below 11
// https://www.learn-cpp.org/en/For_loops
using namespace std;

int main()
{
    for(int n = 0; n < 20; n++)
    {
        if(n % 2 == 0)
        {
            std::cout << n << std::endl;
        }
            
    }
}
