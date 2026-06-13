#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    vector<int> s(n), d(n), e(n);

    for(int i = 0; i < n; i++) {
        cin >> s[i] >> d[i];
        e[i] = s[i] + d[i] - 1;
    }

    vector<pair<int,int>> act(n);

    for(int i = 0; i < n; i++) act[i] = {s[i], e[i]};

    sort(act.begin(), act.end(), comp);

    int start = 0;
    int ans = 0;

    for(auto [a, b] : act) {
        if(a > start) {
            ans++;
            start = b;
        }
    }

    cout << ans;

    return 0;
}