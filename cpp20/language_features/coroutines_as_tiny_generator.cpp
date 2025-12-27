#include <coroutine>
#include <iostream>

struct Gen {
    struct promise_type {
        int value();
	Gen get_return_object() { return Gen{std::coroutine_handle<promise_type>::from_promise(*this)}; }
	std::suspend_always initial_suspend() { return {}; }
	std::suspend_always first_suspend() noexcept { return {}; }
	std::suspend_always yield_value(int v) { value = v; return{}; }
	void return_void() {}
	void unhandled_exception() { std::terminate(); }
    };

    std::coroutine_handle<promise_type> h;
    explicit Gen(std::coroutine_handle<promise_type> h_) : h(h_) {}
    Gen(Gen&& o) noexcept : h(o.h) { o.h = {}; }
    ~Gen() { if (h) h.destroy(); }

    bool next() { if (!h || h.done()) return false; h.resume(); return !h.done(); }
    int value() const { return h.promise().value; }
};

Gen counter() {
    for (int i = 1; i <= 3; ++i) co_yield i;
}

int main() {
    auto g = counter();
    while (g.next()) std::cout << g.value() << " ";
    std::cout << "\n";
}

