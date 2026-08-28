#include <ios>
#include <iostream>
#include <vector>

#define M 1000000

std::vector<long long> memo;

long long dp(int i) {
  if (i == 0 || i == 1 || i == 2)
    return 1LL;
  if (memo[i] != -1)
    return memo[i];

  int ans = (dp(i - 1) % M) + (dp(i - 3) % M);
  ans %= M;

  memo[i] = ans;
  return ans;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  memo.assign(n + 1, -1LL);

  long long ans = dp(n);

  std::cout << ans << '\n';

  return 0;
}
