#include "crypto_square.h"
#include <iostream>
#include <math.h>
#include <string>
#include <regex>

// source: https://exercism.org/tracks/cpp/exercises/crypto-square/edit

/*
Instructions
Implement the classic method for composing secret messages called a square code.

Given an English text, output the encoded version of that text.

First, the input is normalized: the spaces and punctuation are removed 
from the English text and the message is downcased.

Then, the normalized characters are broken into rows. These rows can be regarded as 
forming a rectangle when printed with intervening newlines.

For example, the sentence

"If man was meant to stay on the ground, god would have given us roots."
is normalized to:

"ifmanwasmeanttostayonthegroundgodwouldhavegivenusroots"


The plaintext should be organized in to a rectangle. 
The size of the rectangle (r x c) should be decided by the length of the message, 
such that c >= r and c - r <= 1, where c is the number of columns and r is the number of rows.
Our normalized text is 54 characters long, dictating a rectangle with c = 8 and r = 7:


"ifmanwas"
"meanttos"
"tayonthe"
"groundgo"
"dwouldha"
"vegivenu"
"sroots  "
The coded message is obtained by reading down the columns going left to right.

The message above is coded as:

"imtgdvsfearwermayoogoanouuiontnnlvtwttddesaohghnsseoau"
Output the encoded text in chunks that fill perfect rectangles (r X c), 
with c chunks of r length, separated by spaces. For phrases that are n characters
 short of the perfect rectangle, pad each of the last n chunks with a single trailing space.

"imtgdvs fearwer mayoogo anouuio ntnnlvt wttddes aohghn  sseoau "
Notice that were we to stack these, we could visually decode the ciphertext 
back in to the original message:

"imtgdvs"
"fearwer"
"mayoogo"
"anouuio"
"ntnnlvt"
"wttddes"
"aohghn "
"sseoau "
*/

/*
Usage
REQUIRE("hithere" == crypto_square::cipher("Hi there").normalize_plain_text());
.cipher_text());
).normalized_cipher_text

    (r x c)
    c >= r
    c >= r
    c - r <= 1
    8 * 7
    x

METHODS:




*/

namespace crypto_square {

    class cypher {
        private:
            int columns {0};
            int rows {0};
            int input_length {}; 
            std::string input_string {}; 
            char** matrix;

            // private methods 
            
            std::string normalize(std::string s) {

                int len {s.length()};
                char new_letter {};
                std::string new_string {};
                new_string = std::regex_replace(s, std::regex(" "), "");
                for(char l: new_string) {
                    if(!std::ispunct(l)) {
                        new_letter = tolower(l);
                        new_string += new_letter;
                    }
                    
                }

            }

            std::pair<int,int> find_c_r(int len) {
                /*
                Get square root of length as an integer
                if square_root^2 == length
                    return square root
                else 
                    return 
                        either c = square_root + 1 & r = square_root or

                        c = square_root + 1 & r = square_root +1
                */
                std::pair <int,int> p;
                int sq_int = static_cast<int>(sqrt(len));
                int c_x_r = pow(sq_int,2);
                
                if(c_x_r == len) {
                    p.first = sq_int;
                    p.second = sq_int;
                    return p;
                }
                else { 
                    if( (sq_int + 1) * sq_int >= len) {
                        p.first = sq_int + 1;
                        p.second = sq_int;
                        return p;
                    }
                    else { //square root of 3 will fail - need to add 1 to c and 1 to r as well
                        p.first = sq_int + 1;
                        p.second = sq_int + 1;
                        return p;
                    }
                }
                
            }
            
            char ** create_matrix() {
                //allocate
                char** m = new char*[this->rows];
                for(int x; x< this->rows; x++) {
                    m[x] = new char[this->columns];
                }
                // fill
                for(int y; y< this->rows; y++) {
                    for(int z; z< this->columns; z++) {
                        m[y][z] = {' '};
                    }
            }
            return m;
        }
            // char ** create_matrix() {
            //     char** m = new char*[this->rows];
            //     for(int x; x< this->rows; x++) {
            //         m[x] = new char[this->columns];
            //     }

            // }
            

            

        public:
            cypher(std::string inp) // Constructor
            {
                // get rows and columns

                this->input_string = normalize(inp);
                this->input_length = this->input_string.length();
                std::pair<int,int> temp_pair  = find_c_r(this->input_length);
                this->columns = temp_pair.first; 
                this->rows = temp_pair.second;

                // create empty matrix (2dim array)
                this->matrix = create_matrix();

            };

            const std::string normalize_plain_text() { // done
                return this->input_string;
            }

            std::vector<std::string> plain_text_segments() { //NOT DONE
                std::vector<std::string> v;
                return v;
            }

            std::string cypher_text() { //NOT DONE
                std::string s;
                return s;
            }

            std::string normalized_cipher_text() { //NOT DONE
                std::string s;
                return s;
            }


    };





}
