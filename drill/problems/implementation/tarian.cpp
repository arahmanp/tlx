#include <algorithm>
#include <ios>
#include <iostream>
#include <utility>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::vector<std::pair<std::string, int>> instructions(n);
    for(int i = 0; i < n; i++) 
        std::cin >> instructions[i].first >> instructions[i].second;
    
    int curr_x = 0, curr_y = 0;
    int max_x = 0, min_x = 0;
    int max_y = 0, min_y = 0;

    for(auto [s, i] : instructions) {
        if(s == "maju") {
            curr_y += i;
            max_y = std::max(max_y, curr_y);
        }
        else if(s == "mundur") {
            curr_y -= i;
            min_y = std::min(min_y, curr_y);
        }
        else if(s == "kiri") {
            curr_x -= i;
            min_x = std::min(min_x, curr_x);
        }
        else if(s == "kanan") {
            curr_x += i;
            max_x = std::max(max_x, curr_x);
        }
    }

    int p = max_x - min_x;
    int l = max_y - min_y;

    if(p < l) std::swap(p, l);

    std::cout << p << ' ' << l << '\n';

    return 0;
}