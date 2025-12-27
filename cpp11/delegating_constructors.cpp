#include <iostream>

struct X {
    int a, b;
    X(int a_, int b_) : a(a_), b(b_) {}
    X(int a_) : X(a_, 0) {} // delegates
};

int main() {
    X x(5);
    std::cout << x.a << " " << x.b << "\n";
}

