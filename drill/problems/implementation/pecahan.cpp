#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll kpk(ll a, ll b) {
  return (a*b) / gcd(a, b);
}

int main() {
  ll a, b, c, d;

  cin >> a >> b >> c >> d;

  ll x = kpk(b, d);

  a *= x / b;
  c *= x / d;
  
  if(a < c) cout << "lebih kecil\n";
  else if(a > c) cout << "lebih besar\n";
  else cout << "sama\n";

  return 0;
}
