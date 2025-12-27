// Compile with g++ -std=c++20 ...

#include <chrono>
#include <iostream>

int main() {
    using namespace std::chrono;

    // Requires the tz database to be available to your libstdc++ build/runtime.
    zoned_time zt{"Europe/London", system_clock::now()};
    auto local = floor<seconds>(zt.get_local_time().time_since_epoch()).count();
    std::cout << "local seconds since epoch (floored): " << local << "\n";
}
