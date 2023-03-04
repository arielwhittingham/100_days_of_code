#include <iostream>
#include <sstream> // for std::stringstream
#include <string>

using namespace std;

/*

source:

Even though these are treated identically, we prefer the first representation because it’s intuitively
 easier to understand.

argc is an integer parameter containing a count of the number of arguments passed to the program
 (think: argc = argument count). argc will always be at least 1, 
because the first argument is always the name of the program itself. Each command line argument the user 
provides will cause argc to increase by 1.

argv is where the actual argument values are stored (think: argv = argument values, though 
the proper name is “argument vectors”). Although the declaration of argv looks intimidating, argv is 
really just an array of C-style strings. The length of this array is argc.


*/

int main(int argc, char* argv[]) {

    std::cout <<  "Print argv[0]: " << argv[0] << std::endl;
    std::cout <<  "Print argv[1]: " << argv[1] << std::endl;

    
    /*
    Convert numeric command line arguments using std::stringstream var{ };
    */

    int argv2{};

    std::stringstream from_stream{argv[2]};

    from_stream >> argv2; // send std::stringsteam to the int variable (should check first if this is an int)

    std::cout <<  "Print converted argv2: " << argv2 << std::endl;

    return 0;
}