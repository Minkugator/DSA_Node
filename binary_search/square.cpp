#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    if(n == 0){
        cout << ans;
        return 0;
    }
    int low = 0;
    int high = n;
    while(low < high){
        int mid = low + (high - low) / 2;
        if(mid*mid == n){
            ans = mid;
            cout << ans;
            return 0;
        }
        if(mid*mid > n){
            high = mid - 1;
        }
        else{
            ans = mid;
            low = mid + 1;
        }
    }
        cout << ans;
    return 0;
}