#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

std::vector<int> memo;

int dp(int n) {
  if (n == 0)
    return 0;
  if (memo[n] != -1)
    return memo[n];

  int best = std::max(n, dp(n / 2) + dp(n / 3) + dp(n / 4));

  memo[n] = best;
  return best;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  memo.assign(n + 1, -1);

  int ans = dp(n);

  std::cout << ans << '\n';

  return 0;
}
