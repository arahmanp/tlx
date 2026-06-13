#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, k;

  cin >> n >> k;

  if(k > n) cout << n << '\n';
  else cout << (ll)pow(2, n - k) * k << '\n';

  return 0;
}
