#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    int r = (a + b + c) / 7;

    if(r * 4 == a || r * 4 == b || r * 4 == c) {
        cout << "YA";
    } else {
        cout << "TIDAK";
    }

    return 0;
}