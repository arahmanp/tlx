#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;
  
  long long a[n];

  for(int i = 0; i < n; i++) scanf("%lld", &a[i]);

  for(int i = n - 1; i >= 0; i--) printf("%lld\n", a[i]);

  return 0;
}
