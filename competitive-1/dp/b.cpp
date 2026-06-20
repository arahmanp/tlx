#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;

  cin >> n >> k;

  vector<int> w(k), h(k);

  for(int i = 0; i < k; i++) cin >> w[i] >> h[i];

  vector<vector<int>> dp(k + 1, vector<int>(n + 1));
  vector<vector<pair<int,int>>> first(k + 1, vector<pair<int,int>>(n + 1));

  for(int c = 0; c <= n; c++) dp[0][c] = 0;

  for(int i = 1; i <= k; i++) {
    for(int c = 0; c <= n; c++) {
      int best = dp[i - 1][c];
      int item = 0;
      int idx;

      if(w[i - 1] <= c && best < dp[i - 1][c - w[i - 1]] + h[i - 1]) {
        best = dp[i - 1][c - w[i - 1]] + h[i - 1];
        item = w[i - 1];
        idx = i;
      }

      first[i][c] = {idx, item};
      dp[i][c] = best;
    }
  }

  cout << '\n';

  cout << dp[k][n] << '\n';

  int i = k;
  int c = n;
  while(i > 0) {
    if(first[i][c].second == 0) {
      i--;
      continue;
    }
    cout << first[i][c].first << ' ' << first[i][c].second << '\n';
    c -= first[i][c].second;
    i--;
  }

  return 0;
}
