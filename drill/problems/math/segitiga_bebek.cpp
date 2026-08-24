#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> x(n), y(n);
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

    if(n < 3) {
        cout << "-1.00" << '\n';
        return 0;
    }

    long long best = 1e9;
    int minCount = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                long long area = abs(
                    x[i] * (y[j] - y[k]) +
                    x[j] * (y[k] - y[i]) +
                    x[k] * (y[i] - y[j])
                );

                if(area > 0) {
                    if(area < best) {
                        best = area;
                        minCount = 1;
                    } else if(area == best) {
                        minCount++;
                    }
                }
            }
        }
    }

    if(best == 1e9 || minCount > 1) {
        cout << "-1.00" << '\n';
        return 0;
    }

    cout << fixed << setprecision(2) << best / 2.0 << '\n';
}