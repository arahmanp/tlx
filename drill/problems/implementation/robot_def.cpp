#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  string s;

  cin >> s;

  x = y = 0;

  for(auto op : s) {
    if(op == 'R') x++;
    else if(op == 'L') x--;
    else if(op == 'U') y++;
    else if(op == 'D') y--;
  }

  cout << x << ' ' << y << '\n';

  return 0;
}
