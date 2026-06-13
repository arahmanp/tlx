#include <bits/stdc++.h>
using namespace std;

const int M = 998'244'353;

typedef long long ll;

int main() {
  int n;

  cin >> n;

  int a[n];

  for(int i = 0; i < n; i++) cin >> a[i];

  if(n > 2000) {
    cout << 0 << '\n';
    return 0;
  }

  ll ans = 1;

  for(int j = 1; j < n; j++) {
    for(int i = 0; i < j; i++) {
      ans *= (((ll)a[i] ^ a[j]) % M);
      ans %= M;
    }
  }

  cout << ans << '\n';

  return 0;
}
