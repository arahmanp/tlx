#include <ios>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;

    std::cin >> n >> m;

    if(n % m == 0) std::cout << "YA\n";
    else std::cout << "TIDAK\n";

    return 0;
}