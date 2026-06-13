#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, a, b;

  cin >> n >> m >> a >> b;

  int x = (m / b) * (n / a);
  int y = (m / a) * (n / b);
  
  cout << max(x, y) << '\n';

  return 0;
}
