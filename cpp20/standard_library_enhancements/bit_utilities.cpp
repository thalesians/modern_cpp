// Compile with g++ -std=c++20 ...

#include <bit>
#include <cstdint>
#include <iostream>

int main() {
    std::uint32_t x = 0b10110100u;
    std::cout << std::popcount(x) << "\n";
}
