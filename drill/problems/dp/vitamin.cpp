#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

int n, m;
std::vector<std::vector<int>> memo;
std::vector<int> h, k, d;

int dp(int i, int c) {
    if(i == 0) return 0;
    if(memo[i][c] != -1) return memo[i][c];

    int best = dp(i - 1, c);
    if(c >= h[i]) {
        if(d[i] == 1) {
            best = std::max(best, dp(i - 1, c - h[i]) + k[i]);
        } else if (d[i] == 0) {
            best = std::max(best, dp(i, c - h[i]) + k[i]);
        }
    }

    memo[i][c] = best;
    return best;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> n >> m;

    memo.assign(n + 1, std::vector<int>(m + 1, -1));
    h.assign(n + 1, 0);
    k.assign(n + 1, 0);
    d.assign(n + 1, 0);

    for(int i = 1; i <= n; i++) std::cin >> h[i] >> k[i] >> d[i];

    int ans = dp(n, m);

    std::cout << ans << '\n';

    return 0;
}