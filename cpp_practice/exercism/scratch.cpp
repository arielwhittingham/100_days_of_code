#include <iostream>
#include <string>
#include <regex>

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

    

    return 0;



}