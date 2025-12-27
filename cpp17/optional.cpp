#include <iostream>
#include <optional>

std::optional<int> maybe_parse(bool ok) {
    if (!ok) return std::nullopt;
    return 123;
}

int main() {
    auto v = maybe_parse(true);
    std::cout << v.value_or(-1) << "\n";
}

