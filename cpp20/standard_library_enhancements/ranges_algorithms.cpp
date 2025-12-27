// Compile with g++ -std=c++20 ...

#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> v{3,1,2};
    std::ranges::sort(v);
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";
}
