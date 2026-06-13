#include <bits/stdc++.h>
using namespace std;

bool comp(pair<char,int> a, pair<char,int> b) {
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    string s;

    cin >> s;

    unordered_map<char,int> freq;
    unordered_set<char> char_list;

    for(auto c : s) {
        if(char_list.count(c) == 0) {
            char_list.insert(c);
            freq[c] = 1;
        } else {
            freq[c]++;
        }
    }

    if(char_list.size() < 3) {
        cout << -1;
        return 0;
    }

    vector<pair<char,int>> v;

    for(auto c : char_list) {
        v.push_back({c, freq[c]});
    }

    sort(v.begin(), v.end(), comp);

    int ans = 0;

    int a = v[0].second;
    int b = v[1].second;
    int c = v[2].second;

    while(a != 0 && b != 0 && c != 0) {
        ans += 3;

        a--;
        b--;
        c--;
    }

    if(a > 0) ans++;
    if(b > 0) ans++;
    if(c > 0) ans++;

    cout << ans;

    return 0;
}