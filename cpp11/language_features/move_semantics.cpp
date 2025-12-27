#include <iostream>
#include <string>
#include <utility>

int main() {
    std::string a = "hello";
    std::string b = std::move(a); // moves from a into b
    std::cout << "b=" << b << "\n";
    std::cout << "a.size()=" << a.size() << "\n"; // valid but unspecified contents
}

