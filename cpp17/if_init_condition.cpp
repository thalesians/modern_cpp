#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string,int> m{{"a",1},{"b",2}};
    if (auto it = m.find("b"); it != m.end()) {
        std::cout << it->second << "\n";
    }
}

