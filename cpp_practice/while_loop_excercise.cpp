#include <iostream>

// Print from 1 to 20 in ascending order using a while loop
// https://www.learn-cpp.org/en/While_loops
using namespace std;

int main(void)
{
    int limit = 20;
    int start = 1;

    while(start <= limit)
    {
        std::cout << start << std::endl;
        start++;
    }   
}