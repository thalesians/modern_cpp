#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::ostringstream out;
    out << std::quoted("hello world");
    std::cout << out.str() << "\n"; // "hello world"

    std::istringstream in(out.str());
    std::string s;
    in >> std::quoted(s);
    std::cout << s << "\n";
}
