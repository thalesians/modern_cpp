#include <chrono>
#include <iostream>

int main() {
    using namespace std::chrono;

    year_month_day d{year{2025}, month{12}, day{26}};
    std::cout << int(d.year()) << "-" << unsigned(d.month()) << "-" << unsigned(d.day()) << "\n";
}
