#include <expected>
#include <iostream>
#include <string>

std::expected<int, std::string> parse_nonneg(const std::string & s) {
    try {
        int x = std::stoi(s);
	if (x < 0) return std::unexpected("negative");
	return x;
    } catch (...) {
        return std::unexpected("not an int");
    }
}

int main() {
    auto r = parse_nonneg("12");
    if (r) std::cout << *r << "\n";
    else   std::cout << "err: " << r.error() << "\n";
}

