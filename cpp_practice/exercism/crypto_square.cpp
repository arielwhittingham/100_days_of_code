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

REQUIRE("hithere" == crypto_square::cipher("Hi there").normalize_plain_text());
.cipher_text());
).normalized_cipher_text

    (r x c)
    c >= r
    c >= r
    c - r <= 1
    8 *7
    x

*/



namespace crypto_square {

    class cypher {
        private:
            int columns {};
            int rows {};
            int input_length {}; // set
            std::string input_string {}; // set

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

            std::pair find_c_r(int len) {
                std::pair <int,int> p;
                double sq {sqrt(len)};
                int sq_int = static_cast<int>(sqrt(len));
                int c_x_r = pow(sq_int,2);
                
                if(c_x_r == len) {

                }
                //sqare root of 3 will fail need to add 1 to c and 1 to r as well
                
            }






        public:
            cypher(std::string inp)
            {
                this->input_string = normalize(inp);
                input_length = this->input_string.length();
                
            }
            ;

    };





}
