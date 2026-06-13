#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, g, h, i ,q, s;

  cin >> a >> b >> g >> h >> i >> q >> s;

  int ans = 0;

  ans += a;

  if(b < 0) b *= -1;
  ans += b;

  if(g < 0) g *= -1;
  ans += g;

  if(h < 0) h *= -1;
  ans += h;

  if(i < 0) i *= -1;
  ans += i;

  if(q < 0) q *= -1;
  ans += q;

  if(s < 0) s *= -1;
  ans += s;

  cout << ans << '\n';

  return 0;
}
