#include <iostream>
#include <cstdlib> // this is where exit comes from
using namespace std;


void cleanup_code() {
    std::cout << "cleanup code executed" << std::endl;
}

int main(void) {

    std::atexit(cleanup_code); // not calling cleanup_code, just telling the coe to run cleanu_code when it exits
    std::cout << "Do Something" << std::endl;

    std::exit(0); // returns 0 to the OS

    std::cout << "Never Executes" << std::endl;

}