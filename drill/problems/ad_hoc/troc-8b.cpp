#include <algorithm>
#include <ios>
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string s;

    std::cin >> s;

    int count_b = 0, count_o = 0, count_n = 0;

    for(auto c : s) {
        if(c == 'b') count_b++;
        else if(c == 'o') count_o++;
        else if(c == 'n') count_n++;
    }

    int count_bon = std::min({count_b, count_o, count_n});

    int ans;
    if(count_bon <= 1) ans = 0;
    else ans = count_bon - 1;

    std::cout << ans << '\n';

    return 0;
}