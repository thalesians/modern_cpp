#include <concepts>
#include <iostream>

template<class T>
requires std::integral<T>
T twice(T x) { return x + x; }

int main() {
    std::cout << twice(21) << "\n";
}

