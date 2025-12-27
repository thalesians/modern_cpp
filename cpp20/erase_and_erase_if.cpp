#include <iostream>
#include <vector>

int main() {
    std::vector<int> v{1,2,3,4,5,6};
    std::erase_if(v, [](int x){ return x % 2 == 0; }); // remove evens
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";
}
