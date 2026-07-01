#include <iostream>
#include <vector>

int main() {
    int n;

    std::cin >> n;

    std::vector<std::vector<int>> mat(n, std::vector<int>(n));

    mat[0][0] = 1;

    for(int i = 1, b = 2; i < n; i++, b++) {
        mat[i][0] = mat[i - 1][0] + b;
        mat[0][i] = mat[0][i - 1] + b;
    }

    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            mat[i][j] = mat[i][j - 1] + mat[i - 1][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            std::cout << mat[i][j] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}