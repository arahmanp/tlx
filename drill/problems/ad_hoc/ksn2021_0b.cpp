#include <bitset>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int q, k;

    std::cin >> q >> k;

    std::vector<int> c(q);

    for(int i = 0; i < q; i++) std::cin >> c[i];

    for(auto el : c) {
        std::string bin32_p(32, '0');

        std::string bin32_k = std::bitset<32>(k).to_string();
        std::string bin32_c = std::bitset<32>(el).to_string();

        for(int i = 0; i < 32; i++) {
            if(bin32_c[i] == '1' && bin32_k[i] == '0') bin32_p[i] = '1';
            else if(bin32_c[i] == '1' && bin32_k[i] == '1') continue;
            else if(bin32_c[i] == '0' && bin32_k[i] == '0') continue;
            else if(bin32_c[i] == '0' && bin32_k[i] == '1') {
                bin32_p = std::string(32, '1');
                break;
            }
        }

        std::bitset<32> bits_p(bin32_p);

        int p = static_cast<int>(bits_p.to_ulong());

        std::cout << p << '\n';
    }

    return 0;
}