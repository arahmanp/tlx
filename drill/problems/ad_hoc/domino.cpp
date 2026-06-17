#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll M = 998'244'353;

int main() {
  ll n, m;

  cin >> n >> m;

  if(n == 1 && m == 1) {
    cout << 1 << '\n';
    return 0;
  }

  ll x = n * m;

  ll res = 1;
  for(int i = 1; i <= x - 1; i++) {
    res = (res % M) * 2;
    res %= M;
  }

  cout << res << '\n';

  return 0;
}

