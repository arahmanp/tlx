#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    
    cin >> n >> x;

    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    int diff = 1e9;
    int num = 1e9;

    for(int i = 0; i < n; i++) {
        int curDiff = abs(a[i] - x);

        if(curDiff < diff) {
            diff = curDiff;
            num = a[i];
        } else if(curDiff == diff) {
            num = min(num, a[i]);
        }
    }

    cout << num << '\n';

    return 0;
}