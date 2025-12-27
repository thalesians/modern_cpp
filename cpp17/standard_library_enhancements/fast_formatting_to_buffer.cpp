#include <charconv>
#include <iostream>

int main() {
    char buf[32];
    int x = 12345;
    auto [ptr, ec] = std::to_chars(buf, buf + sizeof(buf), x);
    if (ec == std::errc{}) std::cout.write(buf, ptr - buf), std::cout << "\n";
}
