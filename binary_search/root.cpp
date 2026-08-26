#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    cin >>  m;
    int ans = -1;
    int low = 0;
    int high = m;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(pow(mid,n) == m){
            ans = mid;
            cout << ans;
            return 0;
        }
        if(pow(mid,n) > m){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << ans;
    return 0;
}