#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool sorted = true;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n - 1; i++){
        if(v[i] > v[i+1]){
            sorted = false;
            break;
        }
    }
    cout << sorted;
    return 0;
}