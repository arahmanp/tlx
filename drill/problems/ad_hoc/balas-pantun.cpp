#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;

    cin >> n;

    int a[n], b[n];

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int total_b = 0;

    for(int i = 0; i < n; i++) total_b += b[i];

    ll res = 0;

    for(int i = 0; i < n; i++) {
        res += ((ll)n*a[i] + total_b);
    }

    cout << res;

    return 0;
}