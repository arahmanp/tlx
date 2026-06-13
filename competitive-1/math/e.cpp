#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

const int m = 1e9 + 7;

vvi pascalTriangle(int n) {
    vvi res(n+1, vi(n+1));
    for(int i = 0; i <= n; i++) {
        res[i][0] = 1;
        for(int j = 1; j < i; j++) {
            res[i][j] = ((res[i-1][j] % m) + (res[i-1][j-1] % m)) % m;
        }
        res[i][i] = 1;
    }
    return res;
}

int main() {
    int n, a, b, total = 0;

    cin >> n >> a >> b;

    vvi c = pascalTriangle(n);

    for(int i = a; i <= b; i++) {
        total += (c[n][i] % m);
        total %= m;
    }

    cout << total << '\n';

    return 0;
}