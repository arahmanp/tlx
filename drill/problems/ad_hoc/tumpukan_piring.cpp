#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;

  vector<int> a(n);

  for(int i = 0; i < n; i++) cin >> a[i];

  int res = a[n-1];
  int highest = res;

  for(int i = n - 2; i >= 0; i--) {
    if(a[i] > highest) {
      res += (a[i] - highest);
      highest = a[i];
    }
  }

  cout << res;

  return 0;
}
