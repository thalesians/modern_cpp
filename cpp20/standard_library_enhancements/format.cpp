// Compile with g++ -std=c++20 ...

#include <format>
#include <iostream>

int main() {
    std::cout << std::format("id={}, px={:.2f}\n", 7, 12.345);
}
