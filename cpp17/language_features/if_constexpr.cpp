#include <iostream>
#include <type_traits>

template<class T>
void f(T x) {
    if constexpr (std::is_integral_v<T>) std::cout << "int-like\n";
    else                                 std::cout << "non-int\n";
    (void)x;
}

int main() {
    f(123);
    f(1.2);
}

