#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int search(const vi& v, int x) {
    int l, r, ans = -1;
    l = 0;
    r = v.size() - 1;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(x <= v[mid]) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans + 1;
}

int main() {
    int n, q;

    cin >> n;

    vi a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    cin >> q;

    vi x(q);

    for(int i = 0; i < q; i++) cin >> x[i];

    vi ps(n);

    ps[0] = a[0];

    for(int i = 1; i < n; i++) {
        ps[i] = ps[i - 1] + a[i];
    }

    for(int i = 0; i < q; i++) {
        int ans = search(ps, x[i]);

        cout << ans << '\n';
    }

    return 0;
}