#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int low = 0; 
    int high = n - 1;
    while(low < high){
        int mid = low + (high - low) / 2;
        if(v[mid] > v[high]){
            low = mid  + 1;
        }
        else{
            high = mid;
        }
    }
    cout << low;
}