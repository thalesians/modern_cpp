#include <iostream>

constexpr int sq(int x) { return x * x; }

int main() {
    constexpr int a = sq(12);
    std::cout << a << "\n";
}

