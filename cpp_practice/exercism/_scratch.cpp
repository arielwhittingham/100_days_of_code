#include <iostream>
#include <string>
#include <vector>
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

    //----------create matrix------------//
    int row_count = 7;
    int column_count = 8;
    char** matrix { new char*[row_count] }; // allocate an array of 10 int pointers — these are our rows
    for (int i { 0 }; i < row_count; ++i) {
        matrix[i] = new char[column_count]; // these are our columns
    }
    
    //----------fill matrix with empty------------//
    for (int i { 0 }; i < row_count; ++i) {
         for (int j { 0 }; j < column_count; ++j) {
            matrix[i][j] = {' '};

         }
    }

    //----------fill matrix with values------------//

    for (int i { 0 }; i < row_count; ++i) {
        for (int j { 0 }; j < column_count; ++j) {
        if (i ==2) {
            matrix[i][j] = {'A'};    
        }
        else if (i ==4) {
            matrix[i][j] = {'B'};    
        }

        else if (j %3 == 0) {
            matrix[i][j] = {'C'};    
        }
        else {
            ;
        }

        }
    }

    //----------print filled matrix------------//

    for (int i { 0 }; i < row_count; ++i) {
        for (int j { 0 }; j < column_count; ++j) {
        std::cout << matrix[i][j] << std::endl;

        }
    }




    //----------------------//
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

    
    std::vector<std::string> v5(5);
    std::vector<std::string> vf;

    for(int h {0}; h < 5; h++) {
        std::cout << h <<std::endl;    
        std::string* str = new std::string{}; 
        for(int i; i < 3; i++) {
        
            *str+= 'g';
        }
        std::cout << *str <<std::endl;    
        vf.push_back(*str);
    }

    for(auto& k: vf) {
        std::cout << k <<std::endl;
    }
    

    return 0;



}