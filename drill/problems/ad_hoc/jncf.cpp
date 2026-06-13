#include <bits/stdc++.h>
using namespace std;

int countFactor(int n) {
    int res = 1;
    for(int i = 2; i * i <= n; i++) {
        int x = 0;
        while(n % i == 0) {
            x++;
            n /= i;
        }
        res *= (x+1);
    }
    if(n>1) res *= 2;

    return res;
}

int main() {
    int n;

    cin >> n;

    if(countFactor(n) == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}