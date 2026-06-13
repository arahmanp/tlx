#include <bits/stdc++.h>
using namespace std;

int main() {
  long long x, y, z;

  cin >> x >> y >> z;

  x = x - (y * x) / 100;
  x = x + (z * x) / 100;

  cout << x << '\n';

  return 0;
}
