#include <iostream>
#include <string>
#include <variant>

int main() {
    std::variant<int, std::string> v = "hi";
    std::visit([](const auto& x){ std::cout << x << "\n"; }, v);
}
