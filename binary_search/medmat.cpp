#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin >> m;
    int n;
    cin >> n;
    vector<vector<int>> matrix(m, vector<int>(n) );
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    int low = 0;
    int high = n - 1;
    int median = 0;
    if(high == 0){
        median = matrix[m/2][1];
        cout << "Median is: " << median;
        return 0;
    }
    int midcol = (low + high) / 2;
    int mn = 0;
    int mx = 0;
    for(int i = 0 ; i < m; i++){
        mn = min(mn,matrix[i][midcol]);
    }
    for(int i = 0 ; i < m; i++){
        mx = max(mx,matrix[i][midcol]);
    }
    if(mn == mx){
        median = mn;
        cout << "Median is: " << median;
        return 0;
    }
    for(int i = 0 ; i < m; i++){
        int temp = matrix[i][midcol];
        if(temp!= mn && temp != mx){
            median = temp;
            break;
        }
        else if(temp == mn){
            median = mn;
            break;
        }
        else if( temp == mx){
            median = mx;
            break;
        }   
    }
    cout <<  "Median is: " << median;
    return 0;
}