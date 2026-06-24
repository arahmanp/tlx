#include <ios>
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string label;
    int n;

    std::cin >> label >> n;

    std::cout << "Anak ayam turunlah " << n << '\n';

    for(int i = n - 1; i >= 1; i--) {
        std::cout << "Mati satu tinggallah " << i << '\n';
        std::cout << "Anak ayam turunlah " << i << '\n'; 
    }

    std::cout << "Mati satu tinggallah induknya";

    return 0;
}