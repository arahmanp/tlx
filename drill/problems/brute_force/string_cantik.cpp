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
        char prev = first[2];

        for(auto c : s) {
            if(prev == first[2] && c == first[0]) {
                ans++;
                prev = c;
            } else if(prev == first[1] && c == first[2]) {
                ans++;
                prev = c;
            } else if(prev == first[0] && c == first[1]) {
                ans++;
                prev = c;
            }
        }

        best = std::max(best, ans);
        ans = 0;
    }while (std::next_permutation(first.begin(), first.end()));

    std::cout << best;

    return 0;
}