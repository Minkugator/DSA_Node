#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int find;
    cout << "What sum  : " << endl;
    cin >> find;
    int length,maxlen = 0;
    int low = 0;
    int high = 0;
    int sum = 0;
    while(high < n && low <= high){
        if(sum < find){
            sum = sum +v[high];
            high++;
        }
        else if(sum > find){
            sum = sum - v[low];
            low++;
        }
        else if(sum == find){
            length = high - low;
            maxlen = max(length,maxlen);
            sum = sum - v[low];
            low++;
        }
    }
    if(maxlen == 0){
        cout << 0;
        return 0;
    }
    cout << "The longest subarray is " << maxlen << " elements long.";
    return 0;
}