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
    int diff = INT_MAX;
    cout << "What leftest bound do you need : " << endl;
    cin >> target;
    int left = 0;
    int right = n - 1;
    while(left <= right){
        int mid = (right + left) / 2;
        if(v[mid] >= target){
            ans = mid;
            right = mid - 1; 
        }
        else{
            left = mid + 1;
        }
    }
    cout << ans;
}