#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

vvi pascalTriangle(int n) {
    vvi res(n+1, vi(n+1));
    for(int i = 0; i <= n; i++) {
        res[i][0] = 1;
        for(int j = 1; j < i; j++) {
            res[i][j] = res[i-1][j] + res[i-1][j-1];
        }
        res[i][i] = 1;
    }
    return res;
}

int main() {
    int n;

    cin >> n;

    int x[n], y[n];

    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    vvi c = pascalTriangle(n);

    if(n < 3) {
        cout << 0 << '\n';
    } else {
        cout << c[n][3] << '\n';
    }

    return 0;
}
