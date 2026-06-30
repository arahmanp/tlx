#include <iostream>
#include <utility>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    if(a == b || a == c || b == c) {
        std::cout << -1;
        return 0;
    }

    int ans = 0;

    if(a > b) {
        std::swap(a, b);
        ans++;
    }

    if(b > c) {
        std::swap(b, c);
        ans++;
    }

    if(a > b) {
        std::swap(a, b);
        ans++;
    }

    std::cout << ans;

    return 0;
}