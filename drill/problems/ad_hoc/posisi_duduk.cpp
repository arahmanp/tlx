#include <algorithm>
#include <ios>
#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int m, a, b;
  std::cin >> m >> a >> b;

  if (a + b == 2 * m) {
    int min = (a % 2 == 0) ? 0 : 1;
    int max = std::min(a, b);
    std::cout << min << ' ' << max << '\n';
  } else {
    int min = 0;
    int max = std::min(a, b);
    std::cout << min << ' ' << max << '\n';
  }

  return 0;
}
