#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll inversion;

void merge(vector<int>& arr, int aL, int aR, int bL, int bR) {
    vector<int> tmp;
    int aIdx = aL;
    int bIdx = bL;

    while(aR - aIdx + 1 != 0 && bR - bIdx + 1 != 0) {
        if(arr[aIdx] <= arr[bIdx]) {
            tmp.push_back(arr[aIdx]);
            aIdx++;
        } else {
            tmp.push_back(arr[bIdx]);
            bIdx++;
            inversion += (aR - aIdx + 1);
        }
    }

    while(aR - aIdx + 1 != 0) {
        tmp.push_back(arr[aIdx]);
        aIdx++;
    }

    while(bR - bIdx + 1 != 0) {
        tmp.push_back(arr[bIdx]);
        bIdx++;
    }

    reverse(tmp.begin(), tmp.end());

    for(int i = aL; i <= bR; i++) {
        arr[i] = tmp.back();
        tmp.pop_back();
    }
}

void merge_sort(vector<int>& arr, int l, int r) {
    if(l == r) {
        return;
    } else {
        int mid = (l + r) / 2;

        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);

        merge(arr, l, mid, mid + 1, r);
    }
}

int main() {
    inversion = 0;

    int n;

    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, 0, n - 1);

    cout << inversion;

    return 0;
}