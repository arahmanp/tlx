#include <ios>
#include <iostream>
#include <string>
#include <vector>

bool is_win(const std::vector<std::vector<char>> &grid, char c) {
    for(int i = 0; i < 3; i++) {
        bool all_same = true;
        for(int j = 0; j < 3 && all_same; j++) {
            if(grid[i][j] != c) all_same = false;
        }
        if(all_same) return true;
    }

    for(int i = 0; i < 3; i++) {
        bool all_same = true;
        for(int j = 0; j < 3 && all_same; j++) {
            if(grid[j][i] != c) all_same = false;
        }
        if(all_same) return true;
    }

    bool all_same = true;
    for(int i = 0; i < 3 && all_same; i++) {
        if(grid[i][i] != c) all_same = false;
    }
    if(all_same) return true;

    all_same = true;
    for(int i = 0; i < 3 && all_same; i++) {
        if(grid[i][3 - i - 1] != c) all_same = false;
    }
    if(all_same) return true;

    return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    while(n--) {
        std::vector<std::vector<char>> grid(3, std::vector<char>(3, '#'));

        for(int i = 0; i < 3; i++) {
            int c = 0;
            std::string s;
            std::cin >> s;
            for(auto chr : s) {
                if(chr == 'A' || chr == 'B') {
                    grid[i][c / 2] = chr;
                }
                c++;
            }
        }

        bool a_win = is_win(grid, 'A');
        bool b_win = is_win(grid, 'B');

        if(a_win) std::cout << "A\n";
        else if(b_win) std::cout << "B\n";
        else std::cout << "S\n";
    }

    return 0;
}