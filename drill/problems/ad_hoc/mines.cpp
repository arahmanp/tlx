#include <cstddef>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::string s;
  std::cin >> s;

  std::vector<std::vector<std::string>> tabel_1 = {{"AB", "DC", "CC", "CB"},
                                                   {"CA", "DA", "CD", "DD"},
                                                   {"BC", "AA", "BA", "DB"},
                                                   {"BD", "AD", "BB", "AC"}};

  std::vector<std::vector<std::string>> tabel_2 = {{"CD", "BB", "AC", "CC"},
                                                   {"CB", "DB", "AD", "DD"},
                                                   {"DA", "DC", "BC", "BD"},
                                                   {"AA", "BA", "CA", "AB"}};

  for (size_t i = 0; i < s.size() - 1; i += 2) {
    char c1 = s[i];
    char c2 = s[i + 1];

    char x, y;
    for (int j = 0; j < 4; j++) {
      for (int k = 0; k < 4; k++) {
        if (tabel_2[j][k][0] == c1 && tabel_2[j][k][1] == c2) {
          x = 65 + j;
          y = 65 + k;
          break;
        }
      }
    }

    char ans1, ans2;
    for (int j = 0; j < 4; j++) {
      for (int k = 0; k < 4; k++) {
        if (tabel_1[j][k][0] == x && tabel_1[j][k][1] == y) {
          ans1 = 65 + j;
          ans2 = 65 + k;
          break;
        }
      }
    }

    std::cout << ans1 << ans2;
  }

  std::cout << '\n';

  return 0;
}
