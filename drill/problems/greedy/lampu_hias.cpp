#include <algorithm>
#include <ios>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

bool comp(std::pair<char, int> a, std::pair<char, int> b) {
    return a.second > b.second;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    std::string s;

    std::cin >> s;

    std::unordered_map<char, int> freq;
    std::unordered_set<char> chr;

    for(auto c : s) {
        freq[c]++;
        chr.insert(c);
    }

    if(chr.size() < 3) {
        std::cout << -1;
        return 0;
    }

    std::vector<std::pair<char, int>> v;

    for(auto [c, f] : freq) v.push_back({c, f});

    std::sort(v.begin(), v.end(), comp);

    int ans = 0;

    int a = v[0].second;
    int b = v[1].second;
    int c = v[2].second;

    while(a > 0 && b > 0 && c > 0) {
        a--;
        b--;
        c--;

        ans += 3;
    }

    if(a > 0) ans++;
    if(b > 0) ans++;
    if(c > 0) ans++;

    std::cout << ans;

    return 0;
}