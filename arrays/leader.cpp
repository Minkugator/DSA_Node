#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int bada = INT_MIN;
    int leaders = 0;
    vector<int> ans(n);
    for(int j = n - 1;j >= 0; j--){
            if(v[j] > bada){
            ans[leaders] = v[j];
            leaders++;
        }
        bada = max(bada,v[j]);
    }
    for (int i = 0; i < leaders; i++)
    {
        cout << ans[i] << " ";
    }
    
}