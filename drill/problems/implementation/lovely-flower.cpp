#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, q;

    cin >> p >> q;

    int total = p*p + q*q + 1;

    if(total % 4 == 0) cout << total / 4 << '\n';
    else cout << -1 << '\n';

    return 0;
}