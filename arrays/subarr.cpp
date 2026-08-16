#include <bits/stdc++.h>
using namespace std;
int add(vector<int> ini,int i, int j){
    int sum = 0;
    for(int a = i; a <= j; a++){
        sum = sum + ini[a];
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    int total;
    int length = 0;
    int maxlength = 0;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << "What sum you want : " << endl;
    cin >> total;
    if(add(v,0,n-1) < total){
        cout << "No subarray";
        return 0;
    }
    int x = 0;
    int y = 0;
    while(y < n){ 
        int sum =  add(v,x,y);
        if(sum < total){
        y++;
            }
        if(sum > total){
            x++;
            }
        if(sum == total){
            length = y - x + 1;
            maxlength = max(maxlength,length);
            y++;
            }
    }
cout << "Most long subarray is " << maxlength << " elements long.";
}