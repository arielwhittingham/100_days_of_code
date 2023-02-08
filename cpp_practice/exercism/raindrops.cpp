#include <iostream>
#include <string>
#include "raindrops.h"

namespace raindrops {

    std::string convert(int i) {

        std::string result {""};
        if(i % 3 == 0) {
            result+= "Pling";
        }
        
        if(i % 5 == 0) {
            result+= "Plang";
        }
        
        if(i % 7 == 0) {
            result+= "Plong";
        }
        if(result == "") {
            result = std::to_string(i);
        }
        return result;
    }

}