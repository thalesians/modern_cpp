#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> m;
    m["CL"] = 1;
    m["NG"] = 2;
    std::cout << m["NG"] << "\n";
}
