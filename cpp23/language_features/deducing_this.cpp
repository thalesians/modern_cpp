// g++ -std=c++23 deducing_this.cpp

#include <iostream>
#include <utility>

struct Acc {
    int x = 0;

    template <class Self>
    auto&& get(this Self&& self) {
        return std::forward<Self>(self).x; // preserves value category
    }
};

int main() {
    Acc a{42};
    a.get() = 7;
    std::cout << a.x << "\n";
}

