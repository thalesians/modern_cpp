#include <iostream>

struct S {
    int x = 10;
    int y = 20;
};

int main() {
    S s;
    std::cout << s.x << " " << s.y << "\n";
}

