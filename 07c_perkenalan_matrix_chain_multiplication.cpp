#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;

const int M = 26'101'991;

void solve() {
    int n, q;

    cin >> n;

    vi a(n + 2);

    for(int i = 1; i <= n + 1; i++) cin >> a[i];

    cin >> q;

    // answer for question 1
    vector<vi> dp(n + 1, vi(n + 1));
    for(int i = 1; i <= n; i++) dp[i][i] = 0;

    for(int len = 2; len <= n; len++) {
        for(int l = 1; l <= n-len+1; l++) {
            int r = l+len-1;
            int best = 1e9;

            for(int m = l; m < r; m++) {
                best = min(best, dp[l][m] + dp[m + 1][r] + (a[l] * a[m + 1] * a[r + 1]));
            }

            dp[l][r] = best;
        }
    }

    // answer for question 3
    vector<vll> total(n + 1, vll(n + 1));
    for(int i = 1; i <= n; i++) total[i][i] = 1;

    for(int len = 2; len <= n; len++) {
        for(int l = 1; l <= n-len+1; l++) {
            int r = l+len-1;
            ll tmp = 0;

            for(int m = l; m < r; m++) {
                tmp += ((total[l][m] * total[m + 1][r]) % M);
                tmp %= M;
            }

            total[l][r] = tmp;
        }
    }

    cout << dp[1][n] << ' ' << total[1][n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // cin >> t; // uncomment kalau ada multi-testcase
    while (t--) {
        solve();
    }
    
    return 0;
}
