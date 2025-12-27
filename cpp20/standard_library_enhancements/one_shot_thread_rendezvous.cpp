// Compile with g++ -std=c++20 ...

#include <iostream>
#include <latch>
#include <thread>

int main() {
    std::latch done(3);

    auto worker = [&](int i) {
        // ... do work ...
        std::cout << "w" << i << " ";
        done.count_down();
    };

    std::thread t1(worker, 1), t2(worker, 2), t3(worker, 3);
    done.wait(); // wait for all workers
    std::cout << "\nall done\n";

    t1.join(); t2.join(); t3.join();
}
