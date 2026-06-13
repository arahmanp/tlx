#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    float med;

    sort(a, a+n);

    if(n % 2 != 0) {
        med = a[(n+1)/2 - 1];
    } else {
        med = (float)(a[n/2 - 1] + a[n/2]) / 2;
    }

    printf("%.1f\n", med);

    return 0;
}