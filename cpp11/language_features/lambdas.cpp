#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v{3,1,2};
    std::sort(v.begin(), v.end(), [](int a, int b){ return a < b; });
    std::cout << v[0] << "\n";
}

