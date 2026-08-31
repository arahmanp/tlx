#include <ios>
#include <iostream>
#include <utility>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int x, a, b, c;
  std::cin >> x >> a >> b >> c;

  if (a > b)
    std::swap(a, b);
  if (b > c)
    std::swap(b, c);
  if (a > b)
    std::swap(a, b);

  int ans = 0;
  int m = x / (a + b + c);
  ans += 3 * m;
  x -= m * (a + b + c);

  if (x >= a) {
    ans++;
    x -= a;
  }
  if (x >= b) {
    ans++;
    x -= b;
  }

  std::cout << ans << '\n';

  return 0;
}
