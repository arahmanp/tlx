#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

vector<pll> getFactor(ll n) {
    vector<pll> ans;

    for(ll i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            int x = 0;
            while(n % i == 0) {
                n /= i;
                x++;
            }

            ans.push_back({i, x});
        }
    }

    if(n > 1) ans.push_back({n, 1});

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<pll> primeFactor = getFactor(n);

    ll ans;
    ll best = -1;
    for(ll i = 0; i < primeFactor.size(); i++) {
        ll numFactor = 1;
        for(auto [p, x] : primeFactor) {
            if(p == primeFactor[i].first) {
                numFactor *= (x + 2);
            } else {
                numFactor *= (x + 1);
            }
        }
        
        if(numFactor > best) {
            ans = primeFactor[i].first;
            best = numFactor;
        }

        if(numFactor == best) {
            ans = min(ans, primeFactor[i].first);
        }
    }

    cout << ans << '\n';

    return 0;
}