#include <algorithm>
#include <cstdio>
#include <ios>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int biggest = -1;
    int smallest = 1e6;
    int x;

    while(std::cin >> x) {
        if(x == 0) {
            std::cout << smallest << ' ' << biggest << '\n';

            biggest = -1;
            smallest = 1e6;
        } else {
            biggest = std::max(biggest, x);
            smallest = std::min(smallest, x);
        }
    }

    std::cout << smallest << ' ' << biggest << '\n';

    return 0;
}