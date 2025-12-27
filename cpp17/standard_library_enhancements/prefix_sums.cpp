#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> v{1,2,3,4};
    std::vector<int> out(v.size());

    std::inclusive_scan(v.begin(), v.end(), out.begin());
    for (int x : out) std::cout << x << " ";
    std::cout << "\n"; // 1 3 6 10
}
