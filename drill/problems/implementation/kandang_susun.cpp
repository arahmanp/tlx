#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int n, k;

  scanf("%d %d", &n, &k);

  int t[n];

  for(int i = 0; i < n; i++) scanf("%d", &t[i]);

  ll res = 0;

  int num_floor = ceil((double)n / k);
  
  int highest = -1e9;

  for(int i = 1; i <= n; i++) {
    highest = max(highest, t[i - 1]);

    if(i % k == 0) {
      res += highest;
      highest = -1e9;
    }
  }

  if(n % k != 0) res += highest;

  res += 2;

  if(num_floor > 1) res += num_floor - 1;  

  printf("%lld", res);
  
  return 0;
}
