#include <iostream>
#include <vector>

int main() {
    std::vector<int> v{1,2,3};
    int sum = 0;
    for (int a : v) sum += a;
    std::cout << sum << "\n";
}

