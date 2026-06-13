#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l = 1, r = 8;

    while (l < r) {
        int mid = l + (r - l) / 2;
        
        cout << "?" << endl; 
        
        for (int i = l; i <= mid; i++) {
            cout << i << (i == mid ? "" : " ");
        }
        cout << endl;
        
        for (int i = mid + 1; i <= r; i++) {
            cout << i << (i == (r) ? "" : " ");
        }
        cout << endl;

        cout << flush;

        string res;
        cin >> res;

        if (res == "KIRI") {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    cout << "! " << l << endl;
    return 0;
}