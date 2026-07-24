#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    unsigned int n;
    cin >> n;

    unsigned int x = __bit_width(n);
    int diff = (1 << x) - n;

    cout << diff;

    return 0;
}
