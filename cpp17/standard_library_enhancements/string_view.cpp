#include <iostream>
#include <string_view>

void show(std::string_view s) {
    std::cout << s << " (" << s.size() << ")\n";
}

int main() {
    const char* c = "hello";
    show(c);
    show("world");
}
