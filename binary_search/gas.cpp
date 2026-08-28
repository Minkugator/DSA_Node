#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int> v, int stations, double dist){
    int placed = 0;
    for(int i = 1; i < v.size(); i++){
        double gap = v[i] - v[i - 1];
            if(gap <= dist){
                continue;
            }
        else{
            placed = placed + (v[i] - v[i - 1]) / dist;
        }
    }
    if(placed <= stations) return true;
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
    cout << "How many stations: "  << endl;
    cin >> k;
    double maxgap = 0;
    for(int i = 1; i < n; i++){
        maxgap = max(maxgap, (double)(v[i] - v[i - 1]));
    }
    double low = 0;
    double high = maxgap;
    while(high - low > 1e-6){
        double mid = low + (high - low) / 2;
        if(possible(v,k,mid)){
            high = mid;
        }
        else{
            low = mid;
        }
    }
    cout << "Least distance is: " << low;
    return 0;
}