#include <cstdlib>
#include <ios>
#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  std::vector<int> x(n), y(n);
  for (int i = 0; i < n; i++)
    std::cin >> x[i] >> y[i];

  int total_dist = 0;
  std::vector<int> parity(4, 0);
  bool possible = false;
  for (int i = 0; i < n; i++) {
      total_dist += (abs(x[i] - x[(i + 1) % n]) + abs(y[i] - y[(i + 1) % n]));

      if(x[i] % 2 == 0 && y[i] % 2 == 0) parity[0]++;
      else if(x[i] % 2 == 0 && y[i] % 2 != 0) parity[1]++;
      else if(x[i] % 2 != 0 && y[i] % 2 == 0) parity[2]++;
      else parity[3]++;
  }

  if(total_dist % 2 == 0) {
      if(parity[0] > 0 && (parity[1] > 0 || parity[2] > 0)) possible = true;
      else if(parity[3] > 0 && (parity[2] > 0 || parity[1] > 0)) possible = true;
  } else {
      if(parity[0] > 1 || parity[1] > 1 || parity[2] > 1 || parity[3] > 0) possible = true;
      else if(parity[0] > 0 && parity[3] > 0) possible = true;
      else if(parity[1] > 0 && parity[2] > 0) possible = true;
  }

  std::cout << (possible ? "YES" : "NO") << '\n';

  return 0;
}
