
#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if(n <= 1) return false;

    for(long long i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;

    int n_res = 0;
    for(int a = m; a <= n; a++) {
        for(int b = m; b <= n; b++) {
            string tmp = to_string(a) + to_string(b);
            int x = stoi(tmp);

            if(is_prime(a) && is_prime(b) && is_prime(x)) {
                cout << a << ' ' << b << '\n';
                n_res++;
            }
        }
    }

    if(n_res == 0) cout << "TIDAK ADA";

    return 0;
}