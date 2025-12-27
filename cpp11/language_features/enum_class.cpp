#include <iostream>

enum class Colour { Red, Green };

int main() {
    Colour c = Colour::Red;
    std::cout << (c == Colour::Red) << "\n";
}

