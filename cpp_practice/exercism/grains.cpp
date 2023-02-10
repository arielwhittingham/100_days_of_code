#include "grains.h"
#include <iostream>
#include <cmath>
// source: https://exercism.org/tracks/cpp/exercises/grains/edit

/*
Instructions:
Calculate the number of grains of wheat on a chessboard given that the number on each square doubles.
There once was a wise servant who saved the life of a prince. The king promised to pay whatever the 
servant could dream up. Knowing that the king loved chess, the servant told the king he would like 
to have grains of wheat. One grain 
on the first square of a chess board, 
with the number of grains doubling on each successive square.

There are 64 squares on a chessboard (where square 1 has one grain, square 2 has two grains, and so on).

Write code that shows:
    how many grains were on a given square, and
    the total number of grains on the chessboard
    For bonus points
    Did you get the tests passing and the code clean? If you want to, these are some additional things you could try:

    Optimize for speed.
    Optimize for readability.
Then please share your thoughts in a comment on the s
ubmission. Did this experiment make the code better? Worse? 
Did you learn anything from it?

*/
namespace grains {
    
    #define SQUARES_IN_CHESS 64
    
    ull square(int x) {
        ull result{};
        result = std::pow(2, x-1);
        return result;
    }

    ull total() {
        ull result {0};
        ull base {2};
        for(int x = 0; x <= SQUARES_IN_CHESS ; x++) {
            result += pow(base,x) ;
        }
        
        return (result);
    
    }
}
