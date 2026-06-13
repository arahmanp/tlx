#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    vector<int> rev(n + 1);
    for (int i = 1; i <= n; i++) rev[i] = i;
    
    for (int i = 0; i < m; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        swap(rev[x1], rev[x2]);
    }
    
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        cout << rev[x] << "\n";
    }
    return 0;
}
