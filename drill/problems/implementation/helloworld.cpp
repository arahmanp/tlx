#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;

  getline(cin, s);

  string real = "halo dunia";
  int ans = 0;

  for(int i = 0; i < s.size(); i++) {
    if((char)tolower(s[i]) == real[i]) ans++;
  }

  cout << ans <<  '\n';

  return 0;
}
