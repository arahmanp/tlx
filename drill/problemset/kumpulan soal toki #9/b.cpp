#include <bits/stdc++.h>
using namespace std;

int tiga_pangkat(int x ) {
    if(x == 0) return 1;
    if(x == 1) return 3;

    return tiga_pangkat(x / 2) * tiga_pangkat(x / 2) * tiga_pangkat(x % 2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;

    string base3 = "";
    int tmp = n;
    while( tmp > 0 ) {
        int r = tmp % 3;
        base3 = to_string(r) + base3;
        tmp /= 3;
    }

    int ans = 0;
    vector<int> res;

    int len = base3.length();
    reverse(base3.begin(), base3.end());
    for(int i = 0; i < len; i++) {
        if(base3[i] == '0') continue;
        int digit = base3[i] - '0';
        ans++;
        res.push_back(tiga_pangkat(i) * digit);
    }

    cout << ans << '\n';
    for(auto x : res) {
        cout << x << ' ';
    }

    return 0;
}