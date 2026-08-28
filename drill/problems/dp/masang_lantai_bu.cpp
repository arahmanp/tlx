#include <ios>
#include <iostream>
#include <vector>

#define M 1000000

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  std::vector<long long> dp(n + 1);
  dp[0] = dp[1] = dp[2] = 1LL;

  for (int i = 3; i <= n; i++) {
    dp[i] = (dp[i - 1] % M) + (dp[i - 3] % M);
    dp[i] %= M;
  }

  std::cout << dp[n] << '\n';

  return 0;
}
