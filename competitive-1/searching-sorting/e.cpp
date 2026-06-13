#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int countLessEqual(const vi& v, int x) {
    int l = 0, r = v.size() - 1, ans = -1;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(v[mid] <= x) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int q;
    cin >> q;
    while(q--) {
        int x, y;
        cin >> x >> y;
        
        int total = countLessEqual(a, y) - countLessEqual(a, x);
        cout << total << '\n';
    }

    return 0;
}