#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;

  cout << n - 1 << '\n';

  for(int i = 1; i <= n - 2; i++) {
    cout << 1 << ' ';
  }

  cout << 2 << ' ';

  return 0;
}
