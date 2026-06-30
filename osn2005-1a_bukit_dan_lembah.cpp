#include <bits/stdc++.h>
using namespace std;

void solve() {
    unordered_set<int> used;
    vector<int> v;

    int x;
    while(cin >> x) {
        if(used.count(x) == 0) {
            v.push_back(x);
            used.insert(x);
        }
    }

    int n = v.size();
    int best_bukit = -1e9;
    int best_lembah = 1e9;

    for(int i = 0; i < n; i++) {
        if(i > 0 && i < n - 1) {
            if(v[i] > v[i - 1] && v[i] > v[i + 1] && v[i] > best_bukit) best_bukit = v[i];
            else if(v[i] < v[i - 1] && v[i] < v[i + 1] && v[i] < best_lembah) best_lembah = v[i];
        } else if(i == 0) {
            if(v[i] > v[i + 1] && v[i] > best_bukit) best_bukit = v[i];
            else if(v[i] < v[i + 1] && v[i] < best_lembah) best_lembah = v[i];
        } else {
            if(v[i] > v[i - 1] && v[i] > best_bukit) best_bukit = v[i];
            else if(v[i] < v[i - 1] && v[i] < best_lembah) best_lembah = v[i];
        }
    }

    int diff = best_bukit - best_lembah;

    cout << best_bukit << ' ' << best_lembah << ' ' << diff;
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
