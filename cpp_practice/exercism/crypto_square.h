#ifndef CRYPTO_SQUARE_H
#define CRYPTO_SQUARE_H

#include <iostream>

namespace crypto_square {
 class Cypher {
        private:
            int columns {0};
            int rows {0};
            int input_length {}; 
            std::string input_string {}; 
            char** matrix;

            // private methods 
            std::string normalize(std::string s); 
            std::pair<int,int> find_c_r(int len);
            char ** create_matrix();

        void fill_matrix();

        public:
            Cypher(std::string inp);
            ~Cypher();
            int get_size() const;
            char ** get_matrix();
            const std::string normalize_plain_text();
            std::vector<std::string> plain_text_segments();
            std::string cypher_text();

            std::vector<std::string> normalized_cipher_text();
    };   


}
    



#endif