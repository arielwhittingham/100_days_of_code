#include <iostream>
#include <array>

using namespace std;

struct Coordinate {
    int x {};
    int y {};
};

int main() {
    std::array<Coordinate, 5> coordiate_array{};
    coordiate_array[0] = {1,2};
    coordiate_array[1] = {2,3};


    for(const auto& coordinate: coordiate_array) { // loop thought and implicitely get the type
        cout << coordinate.x <<  " <- x | y -> " << coordinate.y << endl;
    
    }

    


}




