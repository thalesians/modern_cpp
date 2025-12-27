#include <iostream>
#include <string_view>

int main() {
    std::string_view s = "ABC=123";
    auto pos = s.find('=');
    auto key = s.substr(0, pos);
    auto val = s.substr(pos + 1);
    std::cout << key << " " << val << "\n";
}
