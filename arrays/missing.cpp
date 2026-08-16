#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans;
    vector<int> v(n - 1);
    for(int i = 0; i < n - 1; i++){
        cin >> v[i];
    }
    int expect = n*(n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < n - 1; i++){
        sum = sum + v[i];
    }
    ans = expect - sum;
    cout << endl << ans;
}