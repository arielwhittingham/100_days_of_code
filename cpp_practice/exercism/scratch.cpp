#include <iostream>
#include <string>

using namespace std;

int main () {

    char x {' '};
    char y {'!'};
    std::string g = "Ariel ";

    std::cout << static_cast<char>(std::tolower(x)) << std::endl;
    
    // g.replace(' ','');
    // std::replace( s.begin(), s.end(), 'x', 'y')

    std::cout << g.length() << std::endl;

    for(char f: g) {
        std::cout << f << std::endl;
    }

    

    return 0;



}