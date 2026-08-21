#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int target;
    int ans = n;
    cout << "What rightest bound do you need : " << endl;
    cin >> target;
    int left = 0;
    int right = n - 1;
    while(left <= right){
        int mid = (right + left) / 2;
        if(v[mid] > target){
            ans = mid;
            right = mid - 1;
        }
        else if(v[mid] <= target){
            left = mid + 1;
        }
    }
    cout << ans;
}