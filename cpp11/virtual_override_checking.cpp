#include <iostream>

struct B { virtual int f() const { return 1; } };
struct D : B { int f() const override { return 2; } };

int main() {
    B* p = new D();
    std::cout << p->f() << "\n";
    delete p;
}

