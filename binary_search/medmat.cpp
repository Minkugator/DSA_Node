#include <bits/stdc++.h>
using namespace std;
int smaller(const vector<vector<int>>& matrix, int mid) {
    int count = 0;
    for (int i = 0; i < matrix.size(); i++) {
        count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
    }
    return count;
}

int main() {
    int m, n;
    cin >> m >> n;   
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int low = INT_MAX;
    int high = INT_MIN;
    for (int i = 0; i < m; i++) {
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][n - 1]);
    }
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int count = smaller(matrix, mid);
        
        if (count <= (m * n) / 2) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << "Median is: " << low << endl;
    return 0;
}