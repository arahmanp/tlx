#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int n;

  cin >> n;

  int a[n];

  for(int i = 0; i < n; i++) cin >> a[i];

  int min_duck = a[0];
  int max_duck = a[0];

  double mean_duck = a[0];

  printf("%d %d %.4f\n", min_duck, max_duck, mean_duck);

  ll sum = a[0];

  int N = 1;

  for(int i = 1; i < n; i++) {
    min_duck++;
    max_duck++;

    sum += N;

    if(a[i] < min_duck) min_duck = a[i];
    if(a[i] > max_duck) max_duck = a[i];

    mean_duck = (double)(a[i] + sum) / (N + 1);

    sum += a[i];
    N++;

    printf("%d %d %.4f\n", min_duck, max_duck, mean_duck);
  }

  return 0;
}
