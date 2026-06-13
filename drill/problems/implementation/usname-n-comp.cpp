#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;

    cin >> n >> s;

    string ans = "";

    char last_c = s[0];
    char cur_c;

    ans += last_c;

    for(int i = 1; i < n; i++) {
        cur_c = s[i];
        if(cur_c == last_c) continue;

        last_c = cur_c;
        ans += last_c;
    }

    cout << ans << '\n';

    return 0;
}