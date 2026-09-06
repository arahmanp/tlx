#include <ios>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, k;
    std::cin >> n >> k;

    std::vector<int> cards(k);
    for(int i = 0; i < k; i++) {
        std::string card;
        std::cin >> card;
        cards[i] = card[0] - '0';
    }

    int ans = 1;
    for(int i = 1; i < k; i++) {
        ans++;
        if(cards[i] < cards[i - 1]) break;
    }

    std::cout << ans << '\n';

    return 0;
}