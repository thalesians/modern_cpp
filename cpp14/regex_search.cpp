#include <iostream>
#include <regex>
#include <string>

int main() {
    std::string s = "PX=12.34 USD";
    std::regex r(R"(PX=([0-9]+\.[0-9]+))");
    std::smatch m;
    if (std::regex_search(s, m, r)) {
        std::cout << m[1] << "\n";
    }
}
