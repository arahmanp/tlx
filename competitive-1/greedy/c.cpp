#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll d;

    cin >> n >> d;

    vector<pair<ll,ll>> v(n);

    for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    ll ans = 0;

    for(auto [h, b] : v) {
        if(b <= d / h) {
            ans += b;
            d -= (h * b);
        } else {
            ll x = d / h;
            ans += x;
            d -= (h * x);
            break;
        }
    }

    cout << ans << '\n';

    return 0;
}