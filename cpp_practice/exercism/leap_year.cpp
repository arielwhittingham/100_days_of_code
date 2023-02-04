#include <iostream>


// source: https://exercism.org/tracks/cpp/exercises/leap
/*

Given a year, report if it is a leap year. 
The tricky thing here is that a leap year in the 
Gregorian calendar occurs:

    on every year that is evenly divisible by 4
    except every year that is evenly divisible by 100
    unless the year is also evenly divisible by 400
    For example, 1997 is not a leap year, but 1996 is. 
    1900 is not a leap year, but 2000 is.

*/

namespace leap {
    bool leap_year(int y) {
        bool ret {false}; // original value
        if(y % 4 == 0) {
            if(y % 100 == 0 && y % 400 == 0) {
                ret  = true;
            }
            else if (y % 100 == 0) {
                ret = false;
            }
            else {
                ret = true;
            }
            }
        else {
            ret = false;
        }
        return ret;

    }

}  //namespace leap

