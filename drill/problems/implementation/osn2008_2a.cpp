#include <ios>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::vector<std::string> cards(6);

    for(int i = 0; i < 6; i++) std::cin >> cards[i];

    int num_b = 0;

    for(auto el : cards) {
        if(el[1] == 'B') num_b++;
    }

    int score;

    if(num_b >= 3) score = 100;
    else if(num_b == 2) score = 70;
    else if(num_b == 1) score = 40;
    else score = 20;

    std::cout << score;

    return 0;
}