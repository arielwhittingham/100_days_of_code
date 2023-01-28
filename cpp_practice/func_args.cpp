#include <iostream>
#include <string>

using namespace std;

struct person {
    string name;
    int age;
};

void birthday(person * p) {
    p -> age++;
}

int main(void) {
    person g;
    g.name = "Ariel";
    g.age = 1;

    // birthday add function

    birthday(&g);

    cout << g.name << std::endl << g.age << std::endl;
}
