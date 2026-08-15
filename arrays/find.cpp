#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    int num;
    int index = -1;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << "What no. do you want to find: \n";
    cin >> num;
    for(int i = 0; i < n; i++){
        if(v[i] == num){
            index = i;
            break;
        }
    }
    cout << index;
}