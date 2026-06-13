#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x, y;

  cin >> n >> m >> x >> y;

  int max_score = 50;

  int score = 1 * (n - x) + 2 * (m - y);

  if(score > max_score / 2) cout << "LOLOS\n";
  else cout << "TIDAK LOLOS\n";

  return 0;
}
