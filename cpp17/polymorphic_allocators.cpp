#include <iostream>
#include <memory_resource>
#include <vector>

int main() {
    std::byte buf[1024];
    std::pmr::monotonic_buffer_resource pool(buf, sizeof(buf));
    std::pmr::vector<int> v(&pool);

    v.push_back(1);
    v.push_back(2);
    std::cout << v.size() << "\n";
}
