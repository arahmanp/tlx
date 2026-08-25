#include <ios>
#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, m, q;
  std::cin >> n >> m >> q;

  std::vector<int> x(q), y(q);
  for (int i = 0; i < q; i++)
    std::cin >> x[i] >> y[i];

  int r = 0, c = 0, ans = 0;
  std::vector<bool> row(n + 1, false), col(m + 1, false);

  for (int i = 0; i < q; i++) {
    if (!row[x[i]]) {
      r++;
      row[x[i]] = true;
      ans += (m - c);
    }

    if (!col[y[i]]) {
      c++;
      col[y[i]] = true;
      ans += (n - r);
    }

    std::cout << ans << '\n';

    ans = 0;
  }

  return 0;
}
