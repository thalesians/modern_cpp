#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double> t{7, 3.14};
    auto [i, d] = t;
    std::cout << i << " " << d << "\n";
}

