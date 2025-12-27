// Compile with g++ -std=c++20 ...

#include <chrono>
#include <iostream>
#include <semaphore>
#include <thread>

int main() {
    std::counting_semaphore<1> sem(0);

    std::thread t([&]{
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        sem.release();
    });

    sem.acquire();
    std::cout << "go\n";
    t.join();
}
