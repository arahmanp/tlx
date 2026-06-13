#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, b;

    cin >> n >> b;

    int h[n];

    for(int i = 0; i < n; i++) cin >> h[i];

    sort(h, h+n);

    int total = 0;
    int ans = 0;
    int i = n - 1;

    while(total < b) {
        total += h[i];
        ans++;
        i--;
    }

    cout << ans;

    return 0;
}