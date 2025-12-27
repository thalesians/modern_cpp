// Note: requires libstdc++ parallel algorithms support + often -ltbb depending on setup.

#include <algorithm>
#include <execution>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> v(1'000'000);
    std::iota(v.begin(), v.end(), 1);

    std::for_each(std::execution::par, v.begin(), v.end(), [](int& x){ x *= 2; });
    std::cout << v[0] << " " << v.back() << "\n";
}
