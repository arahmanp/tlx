#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  std::vector<int> dp(n + 1);

  dp[0] = 0;
  for (int i = 1; i <= n; i++) {
    dp[i] = std::max(i, dp[i / 2] + dp[i / 3] + dp[i / 4]);
  }

  std::cout << dp[n] << '\n';

  return 0;
}
