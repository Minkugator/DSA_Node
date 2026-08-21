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
    int floor = n;
    int ceil = n;
    cout << "Whose floor and ceil do you need : " << endl;
    cin >> target;
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = (high + low) / 2;
        if(v[mid] == target){
            ceil = mid;
            floor = mid;
            break;
        }
        else if(v[mid] > target){
            ceil = mid;
            high = mid - 1;
        }
        else if(v[mid] < target){
            floor = mid;
            low = mid + 1;
        }
    }
    cout << v[floor] << endl;
    cout << v[ceil];
}