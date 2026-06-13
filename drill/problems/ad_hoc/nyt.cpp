#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;

  int ans;

  if(n % 2 == 0) {
    ans = n*n;
  } else {
    ans = n*n - 1;
  }

  cout << ans << '\n';

  return 0;
}
