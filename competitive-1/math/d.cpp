#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int a, b, c, d;
    ll e, f;

    cin >> a >> b >> c >> d;

    if(b == d) {
        e = (ll)a + c;
        f = b;
    } else {
        e = (ll)a * d + (ll)b * c;
        f = (ll)b * d; 
    }

    int fpb = gcd(e, f);

    if(fpb != 1) {
        e /= fpb;
        f /= fpb;
    }

    cout << e << ' ' << f << '\n';

    return 0;
}