#include <iostream>
#include <string>

int main() {
    std::string s;

    std::cin >> s;

    int n = s.size();

    for(int i = 0; i < n; i++) {
        if(i > 0 && i < n - 1) {
            if(s[i] != s[i - 1] && s[i] != s[i + 1]) {
                std::cout << i + 1;
                return 0;
            }
        } else if((i == 0 && s[i] != s[i + 1] && s[i + 1] == s[i + 2]) ||
                    (i == n - 1 && s[i] != s[i - 1] && s[i - 1] == s[i - 2])) {
            std::cout << i + 1;
            return 0;
        }
    }

    return 0;
}