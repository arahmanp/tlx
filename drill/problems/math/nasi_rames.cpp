#include <algorithm>
#include <ios>
#include <iostream>

using ll = long long;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    ll n, m, k, a, b;

    std::cin >> n >> m >> k >> a >> b;

    ll x = n / (3 * m);
    x *= 3;
    ll y = b / k;
    y *= 3;
    ll z = a / (2 * k);
    z *= 3;

    ll ans = std::min({x, y, z});

    std::cout << ans << '\n';

    return 0;
}