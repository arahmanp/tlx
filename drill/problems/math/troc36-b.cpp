#include <algorithm>
#include <ios>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b, c;

    std::cin >> a >> b >> c;

    int ans = std::min({a, b, c});

    std::cout << ans << '\n';

    return 0;
}