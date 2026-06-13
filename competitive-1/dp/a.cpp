#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    cin >> n;

    vector<int> coins(n);

    for(int i = 0; i < n; i++) cin >> coins[i];

    cin >> k;

    vector<int> dp(k + 1);

    dp[0] = 0;
    for(int i = 1; i <= k; i++) {
        int best = 1e9;

        for(auto c : coins) {
            if(i - c >= 0) {
                best = min(best, dp[i - c] + 1);
            }
        }

        dp[i] = best;
    }

    int ans = -1;

    if(dp[k] != 1e9) ans = dp[k];

    cout << ans << '\n';

    return 0;
}