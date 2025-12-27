// g++ -std=c++20 designated_initializers_c_style.cpp

#include <iostream>

struct P { int x; int y; };

int main() {
    P p{ .x = 1, .y = 2 };
    std::cout << p.x << " " << p.y << "\n";
}

