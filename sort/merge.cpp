#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>&v, int low, int mid, int high){
    vector<int> temp(high - low + 1);
    int i = low;
    int j = mid + 1;
    int k = 0;
    while(i <= mid && j <= high){
        if(v[i] >= v[j]){
            temp[k] = v[j];
            k++;
            j++;
        }
        else{
            temp[k] = v[i];
            k++;
            i++;
        }
    }
    while(i <= mid){
        temp[k] = v[i];
        k++,i++; 
    }
    while(j <= high){
        temp[k] = v[j];
        k++;
        j++;
    }
    for(int x = 0; x < temp.size();x++){
        v[low + x] = temp[x];
    }
}

void mergesort(vector<int>&ar,int a,int b){
    if(a >= b){
        return;
    }
    int mid = (a + b)/2;
    mergesort(ar, a, mid);
    mergesort(ar, mid + 1, b);
    merge(ar, a , mid, b);
}

int main(){
int n;
cin >> n;
vector<int> to(n);

for(int i = 0; i < n;i++){
    cin >> to[i];
}

mergesort(to,0,n - 1);
for(int i = 0; i < n;i++){
    cout << to[i];
}
return 0;
}
