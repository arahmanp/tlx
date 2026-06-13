#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    int x = round(sqrt(n));

    if(x*x == n) {
        cout << x;
    } else {
        cout << 0;
    }

    return 0;
}