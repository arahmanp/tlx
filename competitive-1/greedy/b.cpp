#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    vector<int> x(n), y(n);

    for(int i = 0; i < n; i++) cin >> x[i];

    for(int i = 0; i < n; i++) cin >> y[i];

    sort(x.begin(), x.end());
    sort(y.rbegin(), y.rend());

    ll ans = 0;

    for(int i = 0; i < n; i++) ans += (ll)x[i]*y[i];

    cout << ans;

    return 0;
}