#include <iostream>

using namespace std;

int main() 
{
    // create arrays like in c
    int arr[5] = {1,2,3,4,5};
    //print using for loop
    std::cout << "First loop with original values" <<std::endl;
    for(int x = 0; x < 5; x++)
    {
        cout << arr[x] << std::endl;
    }
    
    // change first value of array 
    arr[0] = 10;
    //print new array using for loop

    std::cout << "Second loop with changed values" <<std::endl;
    for(int y = 0; y < 5; y ++)
    {
        std::cout << arr[y] << std::endl;
    }

}