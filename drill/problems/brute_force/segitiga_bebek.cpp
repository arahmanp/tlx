#include <algorithm>
#include <cstdlib>
#include <iomanip>
#include <ios>
#include <iostream>
#include <utility>
#include <vector>

typedef std::pair<int, int> ii;
typedef std::vector<ii> vii;
typedef std::vector<double> vd;

double triangle_area(ii a, ii b, ii c) {
    double area = abs(
        a.first * (b.second - c.second) + 
        b.first * (c.second - a.second) + 
        c.first * (a.second - b.second)
    ) / 2.0;

    return area;
}

bool is_valid_triangle(ii a, ii b, ii c) {
    int x = abs(
        a.first * (b.second - c.second) + 
        b.first * (c.second - a.second) + 
        c.first * (a.second - b.second)
    );

    return x != 0;
}

int n;
vii points;
vii candidates;
vd areas;

void search() {
    int k = 3;

    if(k > n) return;

    std::vector<int> selector(n, 1);
    std::fill(selector.begin(), selector.begin() + k, 0);

    do {
        for(int i = 0; i < n; ++i) {
            if(selector[i] == 0) {
                candidates.push_back(points[i]);
            }
        }

        double area = triangle_area(candidates[0], candidates[1], candidates[2]);
        areas.push_back(area);

        candidates.clear();
    }while (std::next_permutation(selector.begin(), selector.end()));
}

int main() {
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        int x, y;
        std::cin >> x >> y;
        points.push_back({x, y});
    }

    search();

    std::sort(areas.begin(), areas.end());

    if(areas[0] != areas[1]) {
        std::cout << std::fixed << std::setprecision(2) << areas[0];
    } else {
        std::cout << std::fixed << std::setprecision(2) << -1;
    }

    return 0;
}
