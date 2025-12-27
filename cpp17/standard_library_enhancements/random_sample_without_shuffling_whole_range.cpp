#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

int main() {
    std::vector<int> v{1,2,3,4,5,6,7,8,9,10};
    std::vector<int> out;
    std::mt19937 rng(123);

    std::sample(v.begin(), v.end(), std::back_inserter(out), 3, rng);
    for (int x : out) std::cout << x << " ";
    std::cout << "\n";
}
