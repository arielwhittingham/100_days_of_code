#include <iostream>
#include "reverse_string.h"
namespace reverse_string {

    std::string reverse(std::string s) {

        std::string result { "" };
        int s_l { static_cast<int>(s.length()) - 1};

        for (int x = 0; x <= s_l; x++ ) {
            result += s[s_l - x];
        }

        return result;
    }

}  // namespace reverse_string