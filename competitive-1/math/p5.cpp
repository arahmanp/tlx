#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> listFactors(ll n) {
    vector<ll> res;
    for(ll i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            ll a = n / i;
            if(a == i) {
                res.push_back(a);
            } else {
                res.push_back(i);
                res.push_back(a);
            }
        }
    }
    return res;
}

int main() {
    ll b, c, d;

    cin >> b >> c >> d;

    if(c == d) {
        if(b - c <= 0) {
            cout << 0 << '\n';
        } else {
            cout << b - c << '\n';
        }
        return 0;
    }

    ll diff = c - d;

    vector<ll> factors = listFactors(diff);

    int res = 0;

    for(auto el : factors) {
        if(c % el == d && el <= b) {
            res++;
        }
    }

    cout << res << '\n';

    return 0;
}