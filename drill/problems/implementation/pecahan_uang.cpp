#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;

  cin >> k;

  int c[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

  vector<pair<int,int>> ans;

  for(int i = 9; i >= 0; i--) {
    if(k - c[i] >= 0) {
      int n = c[i];
      int count = 0;

      while(k - c[i] >= 0) {
        count++;
        k -= c[i];
      }

      ans.push_back({n, count});
    }
  }

  for(auto [a, b] : ans) cout << a << ' ' << b << '\n';

  return 0;
}
