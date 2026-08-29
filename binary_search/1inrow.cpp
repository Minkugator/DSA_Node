#include <bits/stdc++.h>
using namespace std;
int findFirstOne(const vector<int>& row, int columns) {
    int low = 0;
    int high = columns - 1;
    int first_one_index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (row[mid] == 1) {
            first_one_index = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return first_one_index;
}

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    
    cout << "Enter the grid elements (0s followed by 1s):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    int max_ones_count = 0;
    int max_row_index = -1;

    for (int i = 0; i < n; i++) {
        int first_one = findFirstOne(mat[i], m);

        if (first_one != -1) {
            int count_ones = m - first_one;

            if (count_ones > max_ones_count) {
                max_ones_count = count_ones;
                max_row_index = i;
            }
        }
    }

    cout << "Index of row with maximum 1s: " << max_row_index << endl;
    return 0;
}