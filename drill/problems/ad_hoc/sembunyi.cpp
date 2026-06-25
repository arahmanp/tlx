#include <ios>
#include <iostream>

typedef long long ll;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    ll n, ans;

    std::cin >> n;

    ans = 1'023'456'789 - n;

    std::cout << ans;

    return 0;
}