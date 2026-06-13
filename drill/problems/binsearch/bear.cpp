#include <bits/stdc++.h>
using namespace std;

bool isExist(const vector<int>& v, int x) {
  int l, r, ans = -1;
  l = 0;
  r = v.size() - 1;

  while(l <= r) {
    int mid = l + (r - l) / 2;

    if(x < v[mid]) {
      r = mid - 1;
    } else if(x > v[mid]) {
      l = mid + 1;
    } else {
      ans = mid;
      break;
    }
  }

  return (ans != -1);
}

int main() {
  int n, d;

  cin >> n >> d;

  vector<int> a(n);

  for(int i = 0; i < n; i++) cin >> a[i];

  int ans = 0;

  for(int i = 0; i < n; i++) {
    if(isExist(a, a[i] + d)) ans++;
  }

  cout << ans << '\n';

  return 0;
}
