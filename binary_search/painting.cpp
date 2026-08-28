#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int> v, int painters, long long time){
    int used = 1;
    long long spent = 0;
    for(int i = 0; i < v.size(); i++){
        if( spent + v[i] <= time){
            spent += v[i];
        }
        else{
            used++;
            spent = v[i];
        }
    }
    if(used <= painters) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cout << "How many painters: "  << endl;
    cin >> k;
    long long low = *max_element(v.begin(), v.end());
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    long long high = sum;
    while(low <= high){
        long long mid = low + (high - low) / 2;
        if(possible(v,k,mid)){
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << "Least time taken is: " << low;
    return 0;
}