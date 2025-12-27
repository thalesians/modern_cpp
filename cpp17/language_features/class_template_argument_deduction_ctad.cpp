#include <iostream>
#include <utility>

int main() {
    std::pair p(1, 2.5); // deduces std::pair<int, double>
    std::cout << p.first << " " << p.second << "\n";
}
