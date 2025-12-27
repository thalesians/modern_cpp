#include <iostream>

struct P { int x; int y; };

int main() {
    P p{ .y = 2, .x = 1};
    std::cout << p.x << " " << p.y << "\n";
}

