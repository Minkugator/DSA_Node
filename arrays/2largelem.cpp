#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> ini(n);
    for(int i = 0; i < n; i++){
        cin >> ini[i];
    }
    int temp = ini[0];
    int maxi = ini[0];
    for(int i = 0; i < n; i++){
        if(ini[i] > maxi){
            temp = maxi;
            maxi = ini[i]; 
        }
        else if(ini[i] > temp && ini[i] != maxi){
            temp = ini[i];            
        }
    }
    cout << maxi << endl;
    cout << temp << endl;
    return 0;
}