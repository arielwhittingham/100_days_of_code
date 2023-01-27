#include <iostream>

using namespace std;

int main()
{
    int search_val = 5;
    int given = 1;

    while(search_val != given)
    {
        cin >> given;
        std::cout << "Thanks for the guess! " << std::endl;

    }
    std::cout << "Correct!" << std::endl;
    return 0;
}