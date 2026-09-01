#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ios>
#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, m, r;
  std::cin >> n >> m >> r;

  int x = std::min(n, m);
  int ans = ceil((double)x / (2 * r + 1));

  std::cout << ans << '\n';

  return 0;
}
