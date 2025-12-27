#include <iostream>
#include <string>
#include <type_traits>

// Feature-test macros are the standard way to probe for new features

struct Person {
    int id;
    std::string name;
};

// Fallback: manual printing (works everywhere)
void print_person_fallback(const Person& p) {
    std::cout << "fallback Person{id=" << p.id << ", name=" << p.name << "}\n";
}

int main() {
    Person p{1, "Ada"};

    // Relection path (C++26)
    // GCC reflection support is still evolving; when it exists, it will typically be behind
    // a feature-test macro and/or require -std=c++2c
#if defined(__cpp_reflection) // name may vary as implementations evolve
    // PSEUDOCODE SHAPE (will compile once GCC has it):
    //
    // using namespace std::meta;
    // constexpr auto info = reflexpr(Person);
    // for...(member: members_of(info)) {
    //     std::cout << name_of(member) << "=" << p.*pointer_to_member(member) << "\n";
    // }
    // For now, print something so the file stays buildable:
    std::cout << "Reflection is available on this compiler build.\n";
    print_person_fallback(p);
#else
    // Portable path (works on released GCC today)
    std::cout << "Reflection is not available; using fallback.\n";
    print_person_fallback(p);
#endif
}
