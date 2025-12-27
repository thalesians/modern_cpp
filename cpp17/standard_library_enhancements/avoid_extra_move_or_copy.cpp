#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> m;
    m.try_emplace("A", 1);  // inserts
    m.try_emplace("A", 999); // does nothing (key exists)
    std::cout << m["A"] << "\n";
}
