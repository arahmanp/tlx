#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;

  cin >> n >> m;

  vi a(m), meja(n, 0);

  for(int i = 0; i < m; i++) cin >> a[i];

  for(auto x : a) {
    meja[x - 1]++;
    meja[x - 1] %= 4;
  }

  int res = 0;
  for(auto x : meja) {
    if(x == 2 || x == 3) res++;
  }

  cout << res << '\n';

  return 0;
}
