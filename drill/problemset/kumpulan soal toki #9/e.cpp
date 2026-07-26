#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, y;
    cin >> n >> y;

    vi ukuran(n);
    for(int i = 0; i < n; i++) cin >> ukuran[i];

    sort(ukuran.begin(), ukuran.end());

    int count = 0;
    int idx = n - 1;
    while(idx >= 0 && y != 0) {
        if(y < ukuran[idx]) {
            idx--;
            continue;
        }
        count++;
        y -= ukuran[idx--];
    }

    cout << count;

    return 0;
}