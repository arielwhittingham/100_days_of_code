#include "binary_search.h"
#include <iostream>
#include <vector>
#include <stdexcept>

/*
source: https://exercism.org/tracks/cpp/exercises/binary-search/edit

Implement a binary search algorithm:

Searching a sorted collection is a common task. A dictionary is a sorted list of word definitions. Given a word, one can find its definition. 
A telephone book is a sorted list of people's names, addresses, 
and telephone numbers. Knowing someone's name allows one to quickly find their telephone number and address.

If the list to be searched contains more than a few items (a dozen, say) a binary search will require far fewer comparisons than a linear search, 
but it imposes the requirement that the list be sorted.
In computer science, a binary search or half-interval search algorithm finds the position of a specified input value (the search "key") within an array sorted by key value.
In each step, the algorithm compares the search key value with the key value of the middle element of the array.
If the keys match, then a matching element has been found and its index, or position, is returned.
Otherwise, if the search key is less than the middle element's key, then the algorithm repeats its action on the sub-array 
to the left of the middle element or, if the search key is greater, on the sub-array to 
the right.
If the remaining array to be searched is empty, then the key cannot be found in the array and a special "not found" indication is returned.
A binary search halves the number of items to check with each iteration, so locating an item (or determining its absence) takes logarithmic time.
 A binary search is a dichotomic divide and conquer search algorithm.


*/

/*

TEST CASE
--------------------------------------------------

TEST_CASE("finds_a_value_in_an_array_of_even_length")
{
    const std::vector<int> data {1, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377};
    
    const std::size_t actual = binary_search::find(data, 21);
    const std::size_t expected = 5;
    REQUIRE(expected == actual);
}
------------------------------------------------------------


*/




namespace binary_search {


    int bin_search(std::vector<int> vec, int search_val, int starting, int ending) {
        
        int mid = starting  + ((ending - starting)/2);

        // base case
        if(starting > ending) {
         throw std::domain_error("Not found");   
        }

        if (vec[mid] > search_val) {
            return bin_search(vec,search_val,starting, mid - 1);
        }
        else if (vec[mid] < search_val) {
            return bin_search(vec,search_val,mid + 1, ending);
            
        }
        else {
            return mid; // found
        }
    }
    // const std::vector<int> test_data {1, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377};

    std::size_t find(std::vector<int> vec, int search_val)   {
        /* 
        function plan:

        1. Find middle function
        middle  = starting_index (end_index - starting_index) / 2

        2. Get middle array item
            if(middle array item matches):
                    return index
            else:
                if search item is less than middle:
                    repeat steps 1/2 on left array
                if search item is more than middle: 
                    repeat steps 1/2 on right array
        */

        int size {static_cast<int>(vec.size())};

        std::size_t mid {static_cast<std::size_t>(bin_search(vec,search_val,0,size -1))};

        return mid;
    }
}