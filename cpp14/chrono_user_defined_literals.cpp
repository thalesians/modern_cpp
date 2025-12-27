#include <chrono>
#include <iostream>
using namespace std::chrono_literals;

int main() {
    auto d = 150ms + 2s;
    std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(d).count() << "\n";
}
