#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::istringstream in("a\nb\n");
    std::string line;
    while (std::getline(in, line)) {
        std::cout << "[" << line << "]\n";
    }
}
