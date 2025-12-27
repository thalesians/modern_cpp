#include <type_traits>

int main() {
    static_assert(sizeof(void*) >= 4, "weird platform");
    static_assert(std::is_integral_v<int>, "int should be integral");
}

