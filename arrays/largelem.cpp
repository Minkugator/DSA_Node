#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> ini(n);
    for(int i = 0; i < n; i++){
        cin >> ini[i];
    }
    int maxi = ini[0];
    for(int i = 0; i < n; i++){
        if(ini[i] > maxi){
            maxi = ini[i];
        }
    }
    cout << maxi;
    return 0;
}