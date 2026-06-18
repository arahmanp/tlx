#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;

  cin >> a >> b;

  if(b >= 1 && b <= 31 && a == 1) cout << "YES";
  else if(b >= 1 && b <= 28 && a == 2) cout << "YES";
  else if(b >= 1 && b <= 31 && a == 3) cout << "YES";
  else if(b >= 1 && b <= 30 && a == 4) cout << "YES";
  else if(b >= 1 && b <= 31 && a == 5) cout << "YES";
  else if(b >= 1 && b <= 30 && a == 6) cout << "YES";
  else if(b >= 1 && b <= 31 && a == 7) cout << "YES";
  else if(b >= 1 && b <= 31 && a == 8) cout << "YES";
  else if(b >= 1 && b <= 30 && a == 9) cout << "YES";
  else if(b >= 1 && b <= 31 && a == 10) cout << "YES";
  else if(b >= 1 && b <= 30 && a == 11) cout << "YES";
  else if(b >= 1 && b <= 31 && a == 12) cout << "YES";
  else cout << "NO";

  return 0;
}
