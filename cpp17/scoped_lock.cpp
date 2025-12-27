#include <iostream>
#include <mutex>

int main() {
    std::mutex a, b;
    {
        std::scoped_lock lock(a, b); // locks both safely
        std::cout << "locked\n";
    }
}
