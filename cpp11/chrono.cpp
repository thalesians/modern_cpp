#include <chrono>
#include <iostream>

int main() {
    auto t0 = std::chrono::steady_clock::now();
    volatile long long s = 0;
    for (long long i = 0; i < 10'000'00; ++i) s += i;
    auto t1 = std::chrono::steady_clock::now();

    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(t1 - t0).count();
    std::cout << ms << " ms\n";
}
