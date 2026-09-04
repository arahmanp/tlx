#include <ios>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m, x;
    std::cin >> n >> m >> x;

    std::vector<int> bebek(n);
    for(int i = 1; i <= n; i++) bebek[i - 1] = i;

    int counter = 0;
    while(x-- && bebek.size() > 1) {
        counter = (counter + m - 1) % bebek.size();
        bebek.erase(bebek.begin() + counter);

        for(auto el : bebek) std::cout << el << ' ';
        std::cout << '\n';
    }

    for(auto el : bebek) std::cout << el << '\n';

    return 0;
}