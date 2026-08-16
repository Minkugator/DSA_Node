#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> v1(n); 
    vector<int> v2(m);
    vector<int> ans(n+m);
    for(int i = 0; i < n; i++){
        cin >> v1[i];
    } 
    for(int i = 0; i < m; i++){
        cin >> v2[i];
    }
    int x = 0;
    int y = 0;
    int ind = 0;
    while(x < n && y < m){
        if(v1[x] >= v2[y]){
            ans[ind] = v2[y];
            ind++;
            y++;
        }
        else{
            ans[ind] = v1[x];
            ind++;
            x++;
        }
    }
    if(x == n){
        while(y < m){
        ans[ind] = v2[y];
        ind++;
        y++;
        }
    }
    
    if(y == m){
        while(x < n){
        ans[ind] = v1[x];
        ind++;
        x++;
        }
    }
        for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}   