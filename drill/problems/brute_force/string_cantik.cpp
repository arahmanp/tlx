#include <algorithm>
#include <ios>
#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string s;

    std::cin >> s;

    std::string tmp = "";
    std::unordered_set<char> chr;

    for(auto c : s) {
        if(c != 'O' && c != 'S' && c != 'N') continue;
        tmp += c;
        chr.insert(c);
    }

    if(chr.size() < 3) {
        std::cout << -1;
        return 0;
    }

    s = tmp;

    std::string first = "NOS";
    int ans = 0;
    int best = -1;

    do {
        int last_idx;

        for(int i = 0; i <= s.size() - 3; i++) {
            if(s[i] == first[0] && s[i + 1] == first[1] && s[i + 2] == first[2]) {
                ans += 3;
                i += 3;
                last_idx = i;
            }
        }

        int i = s.size() - 2;

        if(s[i] == first[0]) {
            ans++;
            if(s[i + 1] == first[1]) {
                ans++;
            }
        } else if(s[i + 1] == first[0]) {
            ans++;
        }

        best = std::max(best, ans);
        ans = 0;
    }while (std::next_permutation(first.begin(), first.end()));

    std::cout << best;

    return 0;
}