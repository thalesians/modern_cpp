#include <iostream>
#include <map>

int main() {
    std::map<int, int> a{{1,10},{2,20}};
    std::map<int, int> b{{3,30}};

    auto nh = a.extract(2); // removes key 2 from a, keeps node
    b.insert(std::move(nh)); // inserts into b

    std::cout << "a.size=" << a.size() << " b.size=" << b.size() << "\n";
}
