#include <atomic>
#include <iostream>

int main() {
    int x = 0;
    std::atomic_ref<int> ax(x);
    ax.fetch_add(5, std::memory_order_relaxed);
    std::cout << x << "\n";
}
