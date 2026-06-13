#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int M = 1'000'000;
bool isExceed = false;

ll fast_exp(ll a, ll b) {
    if (b == 0) return 1;
    
    ll half = fast_exp(a, b / 2);
    ll ans = (half * half);

    if (ans >= M) isExceed = true;
    ans %= M;

    if (b % 2 != 0) {
        ans = ans * (a % M);
        if (ans >= M) isExceed = true;
        ans %= M;
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;

    if (b >= 1 && a >= M) {
        isExceed = true;
    }

    ll ans = fast_exp(a, b);

    if (!isExceed) {
        printf("%lld\n", ans);
    } else {
        printf("%06lld\n", ans);
    }

    return 0;
}