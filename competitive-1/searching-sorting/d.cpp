#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int step;

void bubbleSort(vi& arr) {
    int n = arr.size();
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                step++;
            }
        }
    }
}

int main() {
    step = 0;
    int n;
    cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    bubbleSort(a);
    cout << step << '\n';
    return 0;
}