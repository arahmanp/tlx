#include <bits/stdc++.h>
using namespace std;

int kpk(int a, int b) {
  return (a*b) / gcd(a, b);
}

int main() {
  int n;

  cin >> n;

  int d[n];

  for(int i = 0; i < n; i++) cin >> d[i];

  int res = d[0];

  for(int i = 1; i < n; i++) {
    res = kpk(res, d[i]);
  }

  cout << res << '\n';

  return 0;
}
