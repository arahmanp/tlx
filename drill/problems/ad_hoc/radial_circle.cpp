#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;

  cin >> n >> m;

  for(int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
  }

  cout << 2 * n - 3 - m << '\n';

  return 0;
}
