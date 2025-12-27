#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
    fs::path p = fs::temp_directory_path() / "cpp_fs_demo";
    fs::create_directories(p);
    std::cout << p.string() << "\n";
}
