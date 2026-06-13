#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;

  int x = 1;

  int i = 1;

  while(i <= n) {
    cout << x << '\n';

    x += (i + 1);

    i++;
  }

  return 0;
}
