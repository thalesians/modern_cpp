#include <iostream>
#include <string>
#include <vector>

struct S {
    int id; std::string name;
    S(int i, std::string n) : id(i), name(std::move(n)) {}
};

int main() {
    std::vector<S> v;
    v.emplace_back(7, "Ada");
    std::cout << v[0].name << "\n";
}
