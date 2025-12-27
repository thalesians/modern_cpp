#include <chrono>
#include <iostream>
#include <thread>

int main() {
    std::jthread t([](std::stop_token st) {
        while (!st.stop_requested()) {
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
        std::cout << "stopped\n";
    });

    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    t.request_stop();
}
