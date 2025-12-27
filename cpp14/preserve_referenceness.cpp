#include <iostream>

int& ref(int& x) { return x; }

int main() {
    int a = 7;
    decltype(auto) r = ref(a); // r is int&
    r = 99;
    std::cout << a << "\n";
}

