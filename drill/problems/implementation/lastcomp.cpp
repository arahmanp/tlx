#include <bits/stdc++.h>
using namespace std;

int main() {
  int countO = 0;
  string s;

  cin >> s;

  for(auto chr : s) {
    if(chr == 'O') countO++;
  }

  if(countO == 1) cout << "Ya\n";
  else cout << "Tidak\n";

  return 0;
}
