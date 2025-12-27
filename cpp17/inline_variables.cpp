#include <iostream>

inline int g = 7; // single definition across TUs (if header-included)

int main() {
    std::cout << g << "\n";
}

