#include <ios>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::string a;
    std::cin >> a;

    auto pos_first_a = a.find_first_of('a');
    auto pos_first_b = a.find_first_of('b');
    auto pos_first_c = a.find_first_of('c');

    std::unordered_map<char, int> idx;
    idx['a'] = (pos_first_a != std::string::npos) ? (pos_first_a % 3) : -1;
    idx['b'] = (pos_first_b != std::string::npos) ? (pos_first_b % 3) : -1;
    idx['c'] = (pos_first_c != std::string::npos) ? (pos_first_c % 3) : -1;

    std::vector<char> chr = {'a', 'b', 'c'};
    for(auto i : chr) {
        for(auto j : chr) {
            if(i != j && idx[i] != -1 && idx[j] != -1 && idx[i] == idx[j]) {
                std::cout << -1 << '\n';
                return 0;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(a[i] != '.') {
            if(i % 3 != idx[a[i]]) {
                std::cout << -1 << '\n';
                return 0;
            }
        }
    }

    std::cout << "berhasil\n";
}