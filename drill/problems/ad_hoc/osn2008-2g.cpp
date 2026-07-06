#include <ios>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b;

    std::cin >> a >> b;

    std::vector<bool> eliminated(1001, false);
    for(int i = 2; i <= 1000; i++) {
        if(!eliminated[i]) {
            for(int j = i * i; j <= 1000; j += i) {
                eliminated[j] = true;
            }
        }
    }

    int ans = 0;
    for(int i = a; i <= b; i++) {
        if(eliminated[i]) ans++;
    }

    std::cout << ans << '\n';

    return 0;
}