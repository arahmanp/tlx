#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> sieve(int n) {
    vector<ll> res;
    vector<bool> eliminated(n+1, false);
    for(int i = 2; i <= n; i++) {
        if(!eliminated[i]) {
            res.push_back(i);
            for(ll j = (ll)i*i; j <= n; j += i) {
                eliminated[j] = true;
            }
        }
    }
    return res;
}

int main() {
    int t;

    cin >> t;

    vector<int> a(t);

    for(int i = 0; i < t; i++) {
        cin >> a[i]; // heyoo
    }

    vector<ll> primes = sieve(1'000'000);

    for(auto idx : a) {
        cout << primes[idx-1] << '\n';
    }

    return 0;
}
