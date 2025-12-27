#include <bit>
#include <cstdint>
#include <iostream>

int main() {
    float f = 1.0f;
    std::uint32_t u = std::bit_cast<std::uint32_t>(f);
    std::cout << u << "\n";
}
