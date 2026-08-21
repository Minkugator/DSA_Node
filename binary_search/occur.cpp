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
    int target;
    cout << " Which Elements occurences do you need: ";
    cin >> target;
        int first = -1;
        int last = -1;
        int low = 0;
        int high = n - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(v[mid] == target){
                first = mid;
                high = mid - 1;
            }
            else if(v[mid] > target){
                high = mid - 1;
            }
            else if(v[mid] < target){
                low = mid + 1;
            }
        }
        low = 0; 
        high = n - 1;

        while(low <= high){
            int mid = (low + high) / 2;
            if(v[mid] == target){
                last = mid;
                low = mid + 1;
            }
            else if(v[mid] > target){
                high = mid - 1;
            }
            else if(v[mid] < target){
                low = mid + 1;
            }
        }
        if(first == -1){
            cout << 0;
        }
        else{
        cout << last - first + 1;
        }
    return 0;
};