# include <iostream>
using namespace std;

int main() 
{
    int count =  200;
    int destination  = 0;

    while(count > destination)
    {
        count--;
        
        if(count == 190)
        {
            std::cout << "skipped" << endl;
            continue;
        }
        if(count < 180) 
        {
            std::cout << "aborted" << std::endl;
            break;
        }

        std::cout << count << std::endl;
    }
}