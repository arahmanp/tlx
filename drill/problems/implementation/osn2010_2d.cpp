// https://tlx.toki.id/problems/osn-2010/2D

#include <ios>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, d;

    std::cin >> n >> d;

    int curr_dna;
    std::cin >> curr_dna;

    int ans = 1;

    int prev_dna = curr_dna;

    for(int i = 1; i < n; i++) {
        std::cin >> curr_dna;

        if(curr_dna - prev_dna >= d) ans++;

        prev_dna = curr_dna;
    }

    std::cout << ans;

    return 0;
}