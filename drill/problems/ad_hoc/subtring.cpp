#include <cstddef>
#include <ios>
#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::string x, y;
  std::cin >> x >> y;

  size_t pos = x.find(y);
  if (pos != std::string::npos) {
    std::cout << "TIDAK\n";
  } else {
    std::cout << "YA\n" << x << '\n';
  }

  return 0;
}
