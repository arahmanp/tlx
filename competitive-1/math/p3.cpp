#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll b, k;

    cin >> b >> k;

    ll diff = k - b;

    vector<ll> res;

    bitset<64> binary(diff);

    for(int i = 0; i < 64; i++) {
        if(binary[i] == 1) {
            res.push_back(1LL<<i);
        }
    }

    reverse(res.begin(), res.end());

    for(auto el : res) {
        cout << el << '\n';
    }

    return 0;
}