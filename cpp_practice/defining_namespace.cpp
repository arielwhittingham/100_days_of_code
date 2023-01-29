#include <iostream>


namespace mine {      // this function only exists in the `mine` naemspace
    int func(int x) {
        return x* 2; 
    }
}


int new_func(int n) {
    return n *100;
}

// namespaces can be nested and aliased

namespace foo {
    namespace goo {
        int fun(void) {
            std::cout << "Nested";
        }
    }
}

int main(void) {
    std::cout << mine::func(5) << std::endl; // made this func function only exist in mine namespace so I had to use the namespace identifyer
    std::cout << ::new_func(5) << " " << new_func(10) << std::endl; // `::` refers to the global scope. Can also be left out

    namespace alias = foo::goo; // aliased nested namespace

    alias::fun();

}