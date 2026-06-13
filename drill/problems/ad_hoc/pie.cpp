#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;

  string pattern = "abc";
  string ans = "";

  for(int i = 0; i < n; i++) {
    ans += pattern[i % 3];
  }

  cout << ans;

  return 0;
}
