#include <iostream>
#include <source_location>

void log(const char* msg,
         std::source_location loc = std::source_location::current()) {
    std::cout << loc.file_name() << ":" << loc.line() << " " << msg << "\n";
}

int main() {
    log("hello");
}
