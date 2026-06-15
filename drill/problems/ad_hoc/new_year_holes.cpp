#include <ios>
#include <iostream>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    if(n == 1) {
        std::cout << 0;
        return 0;
    }

    if(n == 0) {
        std::cout << 1;
        return 0;
    }

    if(n % 2 == 0) {
        for(int i = 1; i <= n / 2; i++) {
            std::cout << 8;
        }
        return 0;
    } else {
        std::cout << 4;
        for(int i = 1; i <= (n - 1) / 2; i++) {
            std::cout << 8;
        }
        return 0;
    }
}