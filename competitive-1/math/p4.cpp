#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi convertBase(int n, int b) {
    vi res;
    while(n > 0) {
        res.push_back(n % b);
        n /= b;
    }
    return res;
}

int main() {
    int n, b;

    cin >> n >> b;

    vi res = convertBase(n, b);

    reverse(res.begin(), res.end());

    for(auto el : res) cout << el;

    cout << '\n';

    return 0;
}