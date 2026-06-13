#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, w, a;

  cin >> l >> w >> a;

  int x = l * w;

  if(x == a) {
    cout << "YA\n";
    return 0;
  }

  while(x % 2 == 0) {
    x /= 2;

    if(x == a) {
      cout << "YA\n";
      return 0;
    }
  }

  cout << "TIDAK\n";

  return 0;
}
