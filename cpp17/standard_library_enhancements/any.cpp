#include <any>
#include <iostream>
#include <string>

int main() {
    std::any a = std::string("hello");
    std::cout << std::any_cast<std::string>(a) << "\n";
}
