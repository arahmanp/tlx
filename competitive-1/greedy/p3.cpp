#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s1, s2;

    cin >> n >> s1 >> s2;

    unordered_map<char,int> b1, b2;

    b1['G'] = b2['G'] = 0;
    b1['B'] = b2['B'] = 0;
    b1['K'] = b2['K'] = 0;

    for(int i = 0; i < n; i++) {
        b1[s1[i]]++;
        b2[s2[i]]++;
    }

    int ans = min(b1['G'], b2['K']) + 
            min(b1['B'], b2['G']) + 
            min(b1['K'], b2['B']);

    cout << ans;

    return 0;
}