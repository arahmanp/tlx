#include <cmath>
#include <cstddef>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::string s;
  std::getline(std::cin, s);

  for (auto &c : s) {
    if (c == ' ')
      c = '_';
  }

  int d = ceil(sqrt(s.size()));

  std::vector<std::vector<char>> grid(d, std::vector<char>(d, '_'));

  int dx[] = {0, 1, 0, -1};
  int dy[] = {1, 0, -1, 0};

  int curr_x = (d - 1) / 2;
  int curr_y = (d - 1) / 2;

  int prev_x = curr_x;
  int prev_y = curr_y;

  size_t curr_idx = 0;

  int curr_dir = 0;

  int curr_freq = 1;

  int counter = 0;

  grid[curr_x][curr_y++] = s[curr_idx++];

  while (curr_idx < s.size()) {
    if (counter == 2) {
      curr_freq++;
      counter = 0;
    }

    for (int i = 0; i < curr_freq && curr_idx < s.size(); i++) {
      grid[curr_x][curr_y] = s[curr_idx++];
      prev_x = curr_x;
      prev_y = curr_y;
      curr_x += dx[curr_dir];
      curr_y += dy[curr_dir];
    }

    curr_dir++;
    curr_dir %= 4;

    curr_x = prev_x + dx[curr_dir];
    curr_y = prev_y + dy[curr_dir];

    counter++;
  }

  for (auto row : grid) {
    if (row == std::vector<char>(d, '_'))
      continue;
    for (auto c : row) {
      std::cout << c;
    }
    std::cout << '\n';
  }

  return 0;
}