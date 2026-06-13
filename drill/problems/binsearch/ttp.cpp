#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll totalLen(const vector<ll>& v, ll x) {
  ll ans = 0;

  for(auto el : v) {
    if(el > x) ans += (el - x);
  }

  return ans;
}

ll solve(const vector<ll>& v, ll m) {
  ll ubound = -1e9;
  for(auto el : v) ubound = max(ubound, el);

  ll b, t, ans = -1;
  b = 0;
  t = ubound;

  while(b <= t) {
    ll mid = b + (t - b) / 2;
    ll total = totalLen(v, mid);

    if(total < m) {
      t = mid - 1;
    } else if(total >= m) {
      ans = mid;
      b = mid + 1;
    }
  }

  return ans;
}

int main() {
  ll n, m;

  cin >> n >> m;

  vector<ll> a(n);

  for(int i = 0; i < n; i++) cin >> a[i];

  ll ans = solve(a, m);

  cout << ans << '\n';

  return 0;
}
