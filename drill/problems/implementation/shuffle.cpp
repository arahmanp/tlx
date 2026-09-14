#include <ios>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int m, n;
    std::cin >> m >> n;

    std::vector<std::string> v(n);
    std::unordered_map<std::string, bool> used;
    std::unordered_set<std::string> music_list;
    for(int i = 0; i < n; i++) {
        std::cin >> v[i];
        music_list.insert(v[i]);
    }

    bool benar = true;
    int idx;

    for(int i = 0; i < n && benar; i += m) {
        for(auto msc : music_list) used[msc] = false;

        for(int j = i; j < i + m; j++) {
            if(used[v[j]]) {
                benar = false;
                idx = j;
                break;
            } else used[v[j]] = true;
        }
    }

    if(benar) std::cout << "BENAR\n";
    else std::cout << "BELI BARU\n" << idx + 1 << '\n';

    return 0;
}