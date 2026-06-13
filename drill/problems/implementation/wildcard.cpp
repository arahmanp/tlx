#include <bits/stdc++.h>
using namespace std;

int main() {
    string pattern;
    int n;

    if (!(cin >> pattern >> n)) return 0;

    int star_idx = pattern.find('*');
    string prefix = pattern.substr(0, star_idx);
    string suffix = pattern.substr(star_idx + 1);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (s.length() >= prefix.length() + suffix.length()) {
            
            string s_prefix = s.substr(0, prefix.length());
            
            string s_suffix = s.substr(s.length() - suffix.length());

            if (s_prefix == prefix && s_suffix == suffix) {
                cout << s << '\n';
            }
        }
    }

    return 0;
}