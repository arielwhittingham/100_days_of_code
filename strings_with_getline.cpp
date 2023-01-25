#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string somestring;

    //using getline(cin,somestring)
    // Type multiword string when prompted
    std::getline(cin,somestring);

    std::cout << somestring << endl;

}