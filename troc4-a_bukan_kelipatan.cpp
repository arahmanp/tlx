#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;

    cin >> a >> b >> c;

    for(int i = 2; i <= 100; i++) {
        if(i % a != 0 && i % b != 0 && i % c != 0) {
            cout << i;
            return;
        }
    }
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
