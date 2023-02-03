#include <iostream>

// source: https://www.learncpp.com/cpp-tutorial/switch-fallthrough-and-scoping/

using namespace std;

bool is_vowel(char c)
{
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
        c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
}

bool is_vowel_switch(char c) // this will do the ame thing as the function above, but using switches
{
    switch (c)
    {
        case 'a': // if c is 'a'
        case 'e': // or if c is 'e'
        case 'i': // or if c is 'i'
        case 'o': // or if c is 'o'
        case 'u': // or if c is 'u'
        case 'A': // or if c is 'A'
        case 'E': // or if c is 'E'
        case 'I': // or if c is 'I'
        case 'O': // or if c is 'O'
        case 'U': // or if c is 'U'
            return true;
        default:
            return false;
    }
}

int main(void) {

    int g { 6 };

    switch (g) {
        case 1:
            std::cout << "one" << std::endl;
            break;
        case 6:
            std::cout << "found" << std::endl;
            [[fallthrough]];
        case 7:
            cout << "This will fall through" << std::endl;
    }
    std::cout << is_vowel_switch('a') << std::endl; //using switch based function
    std::cout << is_vowel('b') << std::endl;

    // all switches considered part of the same scope

    return 0;
 }