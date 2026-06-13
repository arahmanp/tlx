#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;

  int a[n], b[n];

  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) cin >> b[i];

  int ans = 0;

  for(int i = 0; i < n; i++) {
    if(a[i] == b[i]) ans++;
  }

  cout << ans << '\n';

  return 0;
}
