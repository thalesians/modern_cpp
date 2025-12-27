#include <charconv>
#include <iostream>
#include <string_view>

int main() {
    std::string_view s = "12345";
    int x = 0;
    auto [ptr, ec] = std::from_chars(s.data(), s.data() + s.size(), x);
    if (ec == std::errc{}) std::cout << x << "\n";
}
