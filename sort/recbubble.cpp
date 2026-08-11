#include<bits/stdc++.h>
using namespace std;
void bubble(vector<int>&v, int suffix){
    int n = v.size();
    if(suffix == n - 1){
        return;
    }    
    int swaps = 0;
    int i = 0;
    while(i < n - suffix - 1){
    if(v[i] <= v[i+1]){
        i++;
    }
    else{
        swap(v[i], v[i+1]);
        swaps++;
        i++;
    }
}
    if(swaps == 0){
        return;
    }
    bubble(v,suffix + 1);
}
int main(){
    int n;
    cin >> n;
    vector<int> initial(n);
    for(int i = 0; i < n; i++){
        cin >> initial[i];
    }
    bubble(initial,0);
    for(int i = 0; i < n; i++){
        cout << initial[i] << " ";
    }
return 0;
}