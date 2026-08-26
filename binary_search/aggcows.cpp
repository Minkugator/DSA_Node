#include <bits/stdc++.h>
using namespace std;
bool poss(vector<int> v, int cow, int mid){
    int placed = 1;
    int last = v[0];
    for(int i = 1; i < v.size() ; i++){
        if(v[i] - last >= mid){
            placed++;
            last = v[i];
            if(placed == cow){
                return true;
            }
        }
    } 
    return false;
}
int main(){
    int n;
    cin >> n;
    vector <int> stalls(n);
    for (int i = 0; i < n; i++)
    {
    cin >> stalls[i];
    }
    sort(stalls.begin(),stalls.end());
    int k;
    cout << "How many Aggro Cows: ";
    cin >> k;
    int mn =    stalls[0];
    int mx =    stalls[n - 1];
    int low = 1;
    int high = mx - mn;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(poss(stalls,k,mid)){
                low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << high;
    return 0;
}