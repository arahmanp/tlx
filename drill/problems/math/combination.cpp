#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> comb;

void search() {
    if(comb.size() == k) {
        for(auto el : comb) {
            cout << el << ' ';
        }
        cout << '\n';
        return;
    }

    int i;
    if(comb.empty()) i = 0;
    else i = comb.back() + 1;

    for(i; i < n; i++) {
        comb.push_back(i);
        search();
        comb.pop_back();
    }
}

int main() {
    cin >> n >> k;

    search();

    return 0;
}