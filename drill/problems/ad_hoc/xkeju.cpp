#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;

  int ans = 0;
  int valid[] = {19, 29, 39, 49, 59, 69, 79, 89, 99};

  int i = 0;
  while(i < 9 && valid[i] <= n) {
    ans++;
    i++;
  }

  cout << ans << '\n';
}


