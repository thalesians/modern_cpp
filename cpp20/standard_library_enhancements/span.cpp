// Compile with g++ -std=c++20 ...

#include <iostream>
#include <span>
#include <vector>

void print(std::span<const int> s) {
    for (int x : s) std::cout << x << " ";
    std::cout << "\n";
}

int main() {
    std::vector<int> v{1,2,3,4};
    print(v);
}

