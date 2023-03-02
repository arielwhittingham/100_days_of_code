#include <vector>
#include <iostream>

#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

namespace binary_search {

    /* std::size_t shoud be the final return type */

    std::size_t find(std::vector<int> vec, int search_val);

}

#endif