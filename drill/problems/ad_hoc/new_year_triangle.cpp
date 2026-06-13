#include <ios>
#include <iostream>
#include <unordered_set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    int i = 1;
    int d = 3;

    std::unordered_set<int> special;

    while(special.size() < 100) {
        special.insert(i);
        i += d;
        d += 2;
    }

    if(special.count(n)) std::cout << 3;
    else std::cout << 4;

    return 0;
}