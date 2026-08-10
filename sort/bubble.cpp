#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int j = 0; j < n - 1; j++){
        for(int k = 0; k < n - j - 1; k++){
            if(v[k] > v[k + 1]){
                swap(v[k], v[k + 1]);
            }
        }
    }
    for(int x = 0; x < n; x++){
        cout << v[x] << " ";
    }
}