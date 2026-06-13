#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;

  cin >> s >> t;

  for(int i = 0; i < s.size(); i++) {
    char s_i = tolower(s[i]);
    char t_i = tolower(t[i]);

    if(s_i != t_i) {
      cout << "x_x\n";
      return 0;
    }
  }

  cout << "20/20\n";

  return 0;
}
