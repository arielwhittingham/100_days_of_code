#include <iostream>
#include <vector>

using namespace std;
//std::vector<int> primes(int n) {
void primes(int n) {

    std::vector <std::vector<int>> vect(n - 1);
    std::vector<int> return_vector;
    const int v_size{static_cast<int>(vect.size())};

    std::cout << v_size << std::endl;

    // Create vector of vectors with each value as {val,0 or 1} i.e. true or false
    for (int it{0}; it < v_size; it++) {
        int val{it + 2};
        std::vector<int> intermediate_vect = {val, 0}; // first prime number (it) is 2
        vect.push_back(intermediate_vect);

    }

    for (int i = 0; i < 3; i++) {
        for (
                auto it = vect[i].begin(); it != vect[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }

}

int main() {
        primes(5);
        return 0;
}