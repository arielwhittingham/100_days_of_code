#include <iostream>
#include <string>
#include <regex>
#include <math.h>

using namespace std;

std::string normalize(std::string s) {

                std::size_t len {s.length()};
                char new_letter {};
                std::string new_string {};
                new_string = std::regex_replace(s, std::regex(" "), "");
                for(char l: new_string) {
                    if(!std::ispunct(l)) {
                        new_letter = tolower(l);
                        new_string += new_letter;
                    }
                    
                }
                return new_string;

            }

int main () {

    char x {'p'};
    char y {'!'};
    std::string z {"Ariel 1!"};
    std::string n_z {};
    
    std::cout << std::ispunct(y) << std::endl;
    /*
    std::tolower()
    new_string = std::regex_replace(s, std::regex(" "), "");
    */
    n_z = normalize(z);
    
    for(char g : n_z) {
        std::cout << g << std::endl;
   }

int gg = 6;
double sq {sqrt(gg)};
int sq_int = static_cast<int>(sqrt(gg));
int c_x_r = pow(sq_int,2);

std::cout << " sq: " << sq<< " int " << sq_int << " c_x_r "<< c_x_r<<  std::endl;
    

    return 0;



}