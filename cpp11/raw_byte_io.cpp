#include <fstream>
#include <iostream>

int main() {
    { // write
        std::ofstream out("x.bin", std::ios::binary);
        int v = 123;
        out.write(reinterpret_cast<const char*>(&v), sizeof(v));
    }
    { // read
        std::ifstream in("x.bin", std::ios::binary);
        int v = 0;
        in.read(reinterpret_cast<char*>(&v), sizeof(v));
        std::cout << v << "\n";
    }
}
