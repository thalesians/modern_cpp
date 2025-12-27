#include <iostream>
#include <shared_mutex>
#include <thread>

int main() {
    std::shared_mutex m;
    int x = 0;

    auto reader = [&]{
        std::shared_lock<std::shared_mutex> lk(m);
        std::cout << x << "\n";
    };
    auto writer = [&]{
        std::unique_lock<std::shared_mutex> lk(m);
        x = 42;
    };

    std::thread t1(writer), t2(reader);
    t1.join(); t2.join();
}
