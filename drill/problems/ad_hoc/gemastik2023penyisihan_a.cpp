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

    int sum = 0;
    for(auto el : v) sum += el;

    if(sum % n != 0) {
        std::cout << "TIDAK SESUAI";
        return 0;
    }

    int mean = sum / n;

    bool all_same = true;
    for(auto el : v) {
        if(el != mean) all_same = false;
    }

    if(all_same) {
        std::cout << "SESUAI";
        return 0;
    }

    std::vector<int> not_same_with_mean;
    for(int i = 0; i < n; i++) {
        if(v[i] != mean) not_same_with_mean.push_back(i);
    }

    if(not_same_with_mean.size() != 2) {
        std::cout << "TIDAK SESUAI";
        return 0;
    }

    int i = not_same_with_mean[0];
    int j = not_same_with_mean[1];

    if(v[i] == v[j]) {
        std::cout << "TIDAK SESUAI";
        return 0;
    }

    if((v[i] + v[j]) % 2 != 0) {
        std::cout << "TIDAK SESUAI";
        return 0;
    }

    if((v[i] + v[j]) / 2 == mean) {
        int bigger = i;
        int smaller = j;
        if(v[i] < v[j]) {
            bigger = j;
            smaller = i;
        }

        int moved = v[bigger] - mean;

        std::cout << moved << ' ' << bigger + 1 << ' ' << smaller + 1;
    } else {
        std::cout << "TIDAK SESUAI";
        return 0;
    }

    return 0;
}