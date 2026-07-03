#include <ios>
#include <iostream>
#include <vector>

// check a/b < c/d
bool is_less(int a, int b, int c, int d) {
    return (long long)a * d < (long long)b * c;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    std::vector<int> v(n), d(n);

    for(int i = 0; i < n; i++) std::cin >> v[i] >> d[i];

    int ans = -1;
    int best_a = 2e9;
    int best_b = 1;

    for(int i = 0; i < n; i++) {
        if(is_less(d[i], v[i], best_a, best_b)) {
            ans = i + 1;
            best_a = d[i];
            best_b = v[i];
        }
    }

    std::cout << ans;

    return 0;
}