#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    string str = to_string(n);

    for(auto chr : str) {
        if(chr == '0') {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}