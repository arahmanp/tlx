#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int k;
    cin >> k;

    vi coins = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

    for(int i = 9; i >= 0; i--) {
        if(k < coins[i]) continue;

        int count = 0;
        while(k >= coins[i]) {
            count++;
            k -= coins[i];
        }

        cout << coins[i] << ' ' << count << '\n';
    }

    return 0;
}