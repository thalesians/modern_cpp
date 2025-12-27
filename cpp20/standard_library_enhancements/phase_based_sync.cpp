#include <barrier>
#include <iostream>
#include <thread>

int main() {
    std::barrier sync(2, []{ std::cout << "phase done\n"; });

    std::thread t([&]{ std::cout << "t1\n"; sync.arrive_and_wait(); });
    std::cout << "t2\n";
    sync.arrive_and_wait();

    t.join();
}
