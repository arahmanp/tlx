#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<int> b(n), s(m);

    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < m; i++) cin >> s[i];

    sort(b.begin(), b.end());
    sort(s.begin(), s.end());

    int i, j, ans;
    i = j = ans = 0;

    while(i < n && j < m) {
        if((b[i] == s[j]) || (s[j] == b[i] + 1)) {
            i++;
            j++;
            ans++;
        } else {
            if(s[j] < b[i]) j++;
            else i++;
        }
    }

    cout << ans;

    return 0;
}