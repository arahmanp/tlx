// =======================================
// THE TRiANGLE
// Geometry
// 496/508
// https://tlx.toki.id/problems/troc-36/A
// =======================================

#include <iostream>

int main() {
    int a, b, c, ans = 0;

    std::cin >> a >> b >> c;

    if(b + c <= a) {
        int x = (a - (b + c) + 1);
        ans += x;
        b += x;
    } else if(a + c <= b) {
        int x = (b - (a + c) + 1);
        ans += x;
        a += x;
    } else if(a + b <= c) {
        int x = (c - (a + b) + 1);
        ans += x;
        a += x;
    }

    std::cout << ans;

    return 0;
}