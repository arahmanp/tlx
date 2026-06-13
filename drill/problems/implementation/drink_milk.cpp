#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y;

  cin >> n >> x >> y;

  int ans;

  if(x <= y) ans = n;
  else ans = x * (n / y) + (n % y);
  
  cout << ans << '\n';

  return 0;
}
