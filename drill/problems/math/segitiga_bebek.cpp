#include <bits/stdc++.h>
using namespace std;

vector<int> comb;
vector<double> x, y;
vector<double> areas;

int n;

void search()
{
    if (comb.size() == 3)
    {
        int first = comb[0];
        int sec = comb[1];
        int third = comb[2];

        double area = abs(
            x[first] * (y[sec] - y[third]) +
            x[sec] * (y[third] - y[first]) +
            x[third] * (y[first] - y[sec]));

        area /= 2;

        areas.push_back(area);

        return;
    }

    int i;
    if (comb.empty())
        i = 0;
    else
        i = comb.back() + 1;

    for (i; i < n; i++)
    {
        comb.push_back(i);
        search();
        comb.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    x.assign(n, 0.0);
    y.assign(n, 0.0);

    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    if (n < 3)
    {
        cout << "-1.00" << '\n';
        return 0;
    }

    search();

    sort(areas.begin(), areas.end());

    if (areas[0] == areas[1])
    {
        cout << "-1.00" << '\n';
        // for (auto el : areas)
        // {
        //     cout << setprecision(2) << el << '\n';
        // }
        return 0;
    }

    cout << fixed << setprecision(2) << areas[0] << '\n';

    return 0;
}