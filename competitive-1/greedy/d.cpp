#include <bits/stdc++.h>
using namespace std;

bool comp(tuple<int,int,double> a, tuple<int,int,double> b) {
    return get<2>(a) > get<2>(b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;

    cin >> n >> x;

    vector<tuple<int,int,double>> v(n);

    for(int i = 0; i < n; i++) {
        int w;

        cin >> w;

        get<0>(v[i]) = w;
    }

    for(int i = 0; i < n; i++) {
        int c;

        cin >> c;

        get<1>(v[i]) = c;
        get<2>(v[i]) = (double)c / get<0>(v[i]);
    }

    sort(v.begin(), v.end(), comp);

    double ans = 0.0;

    for(auto [w, c, y] : v) {
        if(w <= x) {
            ans += (double)c;
            x -= w;
        } else {
            ans += ((double)x * y);
            break;
        }
    }

    cout << fixed << setprecision(5) << ans << '\n';

    return 0;
}