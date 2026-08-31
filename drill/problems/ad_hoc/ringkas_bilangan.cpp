#include <algorithm>
#include <cstddef>
#include <ios>
#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  std::vector<bool> used(1001, false);
  std::vector<int> v;
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    if (!used[x]) {
      v.push_back(x);
      used[x] = true;
    }
  }

  if (v.size() == 1) {
    std::cout << v[0] << '\n';
    return 0;
  }

  std::sort(v.begin(), v.end());

  int first, tail;
  first = tail = v[0];
  for (size_t i = 1; i < v.size(); i++) {
    if (v[i] - tail == 1)
      tail = v[i];
    else {
      if (first == tail)
        std::cout << first << ',';
      else
        std::cout << first << '-' << tail << ',';
      first = tail = v[i];
    }
    if (i == v.size() - 1) {
      if (first == tail)
        std::cout << first;
      else
        std::cout << first << '-' << tail;
    }
  }

  std::cout << '\n';

  return 0;
}
