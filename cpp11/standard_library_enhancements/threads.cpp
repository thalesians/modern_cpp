#include <iostream>
#include <thread>

int main() {
    int x = 0;
    std::thread t([&]{ x = 42; });
    t.join();
    std::cout << x << "\n";
}

