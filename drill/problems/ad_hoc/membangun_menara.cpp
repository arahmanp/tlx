#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    int t;

    std::cin >> t;

    while(t--) {
        int n;

        std::cin >> n;

        std::vector<int> a(n), b(n), c(n);

        for(int i = 0; i < n; i++) std::cin >> a[i] >> b[i] >> c[i];

        int l, h;
        l = h = 0;

        for(int i = 0; i < n; i++) {
            l += std::min({a[i], b[i], c[i]});
            h += std::max({a[i], b[i], c[i]});
        }

        std::cout << l << ' ' << h << '\n';
    }

    return 0;
}