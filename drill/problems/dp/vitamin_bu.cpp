#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, m;
  std::cin >> n >> m;

  std::vector<int> h(n + 1), k(n + 1), d(n + 1);
  for (int i = 1; i <= n; i++)
    std::cin >> h[i] >> k[i] >> d[i];

  std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1));

  for (int c = 0; c <= m; c++)
    dp[0][c] = 0;

  for (int i = 1; i <= n; i++) {
    for (int c = 0; c <= m; c++) {
      int best = dp[i - 1][c];
      if (c >= h[i]) {
        if (d[i] == 1) {
          best = std::max(best, dp[i - 1][c - h[i]] + k[i]);
        } else if (d[i] == 0) {
          best = std::max(best, dp[i][c - h[i]] + k[i]);
        }
      }
      dp[i][c] = best;
    }
  }

  std::cout << dp[n][m] << '\n';

  return 0;
}
