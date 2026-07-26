#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;

    bool pangkat_dua = false;
    for(int i = 0; i <= 17; i++) {
        if(n == (1 << i)) {
            pangkat_dua = true;
            break;
        }
    }

    if(pangkat_dua) {
        cout << "ya";
    } else {
        cout << "bukan";
    }
    
    return 0;
}
