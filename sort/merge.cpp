#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& v, int low, int mid, int high) {
    vector<int> temp;

    int i = low;
    int j = mid + 1;

    while (i <= mid && j <= high) {
        if (v[i] <= v[j]) {
            temp.push_back(v[i]);
            i++;
        } else {
            temp.push_back(v[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(v[i]);
        i++;
    }

    while (j <= high) {
        temp.push_back(v[j]);
        j++;
    }

    for (int k = low; k <= high; k++) {
        v[k] = temp[k - low];
    }
}

void mergeSort(vector<int>& v, int low, int high) {
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    mergeSort(v, low, mid);
    mergeSort(v, mid + 1, high);

    merge(v, low, mid, high);
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    mergeSort(v, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}