#include <ios>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for(int i = 0; i < n; i++) std::cin >> v[i];

    for(int i = 1; i < n - 1; i++) {
        if(!(v[i - 1] < v[i] && v[i] > v[i + 1]) && !(v[i - 1] > v[i] && v[i] < v[i + 1])) {
            std::cout << v[i - 1] << ' ' << v[i] << ' ' << v[i + 1] << '\n';
            return 0;
        }
    }

    std::cout << "ZIGZAG\n";

    return 0;
}