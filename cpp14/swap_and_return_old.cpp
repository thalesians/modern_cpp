#include <iostream>
#include <utility>

int main() {
    int x = 10;
    int old = std::exchange(x, 42);
    std::cout << old << " " << x << "\n";
}
