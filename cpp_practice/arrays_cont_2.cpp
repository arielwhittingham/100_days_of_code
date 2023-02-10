#include <iostream>

using namespace std;

int main () {
    // ommitted length arrays let's the compiler set the length
    int array[]{1,2,3};

    enum OurNames{
        ariel,
        dayana,
        timi,
        count_of_us
    };

    int array_houshold_age[count_of_us]{};

    array_houshold_age[timi] = 2;

    std::cout << array_houshold_age[timi] << std::endl;


}
