#include <algorithm>
#include <iostream>

int main() {
    int x = 15;
    std::cout << std::clamp(x, 0, 10) << "\n";
}
