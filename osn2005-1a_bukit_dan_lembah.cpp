#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> v;
    int x;

    while(cin >> x) {
        if(v.empty() || v.back() != x) v.push_back(x);
    }

    if(v.size() == 1) {
        cout << 0;
        return;
    }

    vector<int> extreme;

    int n = v.size();

    extreme.push_back(v[0]);

    for(int i = 1; i < n - 1; i++) {
        if(v[i] > v[i + 1] && v[i] > v[i - 1]) extreme.push_back(v[i]);
        else if(v[i] < v[i + 1] && v[i] < v[i - 1]) extreme.push_back(v[i]);
    }

    extreme.push_back(v[n - 1]);

    int best_lembah = 1e9;
    int best_bukit = -1e9;

    for(auto el : extreme) {
        best_bukit = max(best_bukit, el);
        best_lembah = min(best_lembah, el);
    }

    int diff = best_bukit - best_lembah;

    cout << diff;
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
