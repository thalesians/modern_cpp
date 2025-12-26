#include <iostream>

int main() {
    auto add = [](auto a, auto b) { return a + b; };
    std::cout << add(2, 3) << "\n";
    std::cout << add(1.5, 2.0) << "\n";
}

