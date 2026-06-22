#include <algorithm>
#include <cstdlib>
#include <ios>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    std::vector<int> a(n);

    for(int i = 0; i < n; i++) std::cin >> a[i];

    int best_dist = 100'000;

    for(auto el : a) {
        int dist = abs(el);
        best_dist = std::min(best_dist, dist);
    }

    std::cout << best_dist;

    return 0;
}