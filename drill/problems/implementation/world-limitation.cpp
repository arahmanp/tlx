#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, x;

    cin >> a >> x;

    int n = x / a;
    int m = x % a;

    cout << n << ' ' << m << '\n';

    return 0;
}