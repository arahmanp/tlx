#include <ios>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

bool check(int a, int b) {
    return (a != -1 && b != -1 && a == b);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::string s;
    std::cin >> n >> s;

    auto first_a = s.find_first_of('a');
    auto first_b = s.find_first_of('b');
    auto first_c = s.find_first_of('c');

    std::vector<bool> idx_used(3, false);
    std::unordered_map<char, int> idx;
    std::vector<char> chr = {'a', 'b', 'c'};

    idx['a'] = (first_a != std::string::npos) ? (first_a % 3) : -1;
    idx['b'] = (first_b != std::string::npos) ? (first_b % 3) : -1;
    idx['c'] = (first_c != std::string::npos) ? (first_c % 3) : -1;

    if(check(idx['a'], idx['b']) || check(idx['a'], idx['c']) || check(idx['b'], idx['c'])) {
        std::cout << -1 << '\n';
        return 0;
    }

    for(auto c : chr) {
        if(idx[c] != -1) idx_used[idx[c]] = true;
    }

    for(auto c : chr) {
        if(idx[c] == -1) {
            for(int i = 0; i < 3; i++) {
                if(!idx_used[i]) {
                    idx[c] = i;
                    idx_used[i] = true;
                    break;
                }
            }
        }
    }

    std::vector<char> chr_idx(3);
    for(auto c : chr) {
        chr_idx[idx[c]] = c;
    }

    for(int i = 0; i < n; i++) {
        if(s[i] != '.') {
            if(i % 3 != idx[s[i]]) {
                std::cout << -1 << '\n';
                return 0;
            }
        } else {
            s[i] = chr_idx[i % 3];
        }
    }

    std::cout << s << '\n';

    return 0;
}