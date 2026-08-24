#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];

    vector<int> tail;

    for(auto el : b) {
        auto it = lower_bound(tail.begin(), tail.end(), el);

        if(it != tail.end()) {
            auto idx = distance(tail.begin(), it);
            tail[idx] = el;
        } else {
            tail.push_back(el);
        }
    }

    cout << tail.size() << '\n';

    return 0;
}