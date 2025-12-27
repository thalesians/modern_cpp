#include <iostream>

void f(int)   { std::cout << "int\n"; }
void f(char*) { std::cout << "ptr\n"; }

int main() {
    f(nullptr); // calls pointer overload
}

