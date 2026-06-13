#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool comp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;

    cin >> k;

    vector<pair<int, int>> kandang(k);
    
    for(int i = 0; i < k; i++) cin >> kandang[i].first;
    for(int i = 0; i < k; i++) cin >> kandang[i].second;

    cin >> n;

    vector<int> b(n);

    for(int i = 0; i < n; i++) cin >> b[i];

    sort(b.rbegin(), b. rend());
    sort(kandang.begin(), kandang.end(), comp);

    ll ans = 0;

    int idxBebek = 0;

    for(auto [kapasitas, harga] : kandang) {
        ll total = 0;

        if(kapasitas <= n - idxBebek) {
            int i = 0;

            while(i < kapasitas) {
                total += ((ll)b[idxBebek++] * harga);
                i++;
            }
        } else {
            while(idxBebek < n) {
                total += ((ll)b[idxBebek++] * harga);
            }
        }

        ans += total;
    }

    cout << ans << '\n';

    return 0;
}