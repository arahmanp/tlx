#include <ios>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    std::vector<int> a(n);

    for(int i = 0; i < n; i++) std::cin >> a[i];

    bool equal = true;
    bool non_decreasing = true;
    bool non_increasing = true;

    for(int i = 0; i < n - 1; i++) {
        if(a[i] != a[i + 1]) equal = false;
        if(a[i] > a[i + 1]) non_decreasing = false;
        if(a[i] < a[i + 1]) non_increasing = false;
    }

    if(equal) std::cout << "EQUAL";
    else if(non_decreasing) std::cout << "NONDECREASING";
    else if(non_increasing) std::cout << "NONINCREASING";
    else std::cout << "NONE";
}