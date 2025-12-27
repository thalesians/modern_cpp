#include <iostream>

template <class... Ts>
auto sum(Ts... xs) {
    return (xs + ...); // fold
}

int main() {
    std::cout << sum(1, 2, 3, 4) << "\n";
}

