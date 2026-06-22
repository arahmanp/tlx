#include <ios>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    if(n % 10 == 0) {
        std::cout << "Rep";
    } else {
        std::cout << "Neb";
    }

    return 0;
}