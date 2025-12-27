#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<double> a{1,2,3};
    std::vector<double> b{4,5,6};

    double dot = std::transform_reduce(a.begin(), a.end(), b.begin(), 0.0);
    std::cout << dot << "\n"; // 32
}
