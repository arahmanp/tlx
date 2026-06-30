#include <iostream>

typedef long long ll;

int main() {
    ll n, k , x;

    std::cin >> n >> k >> x;

    if(x <= k * n && x >= -k * n) std::cout << "YA";
    else std::cout << "TIDAK";

    return 0;
}