#include<bits/stdc++.h>
using namespace std;

void recins(vector<int>&v,int n){
if(n <= 1) return;
recins(v,n-1);
int key = v[n - 1];
int j = n - 2;
while(j >= 0 && v[j] > key){
    v[j+1] = v[j];
    j--;
}
v[j + 1] = key;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    recins(v,n);
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}