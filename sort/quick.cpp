#include<bits/stdc++.h>
using namespace std;
int part(vector<int>&v, int low , int high){
    int pivot = v[high];
    int i,j;
    i = low - 1;
    for(int j = low; j < high; j++){
        if(v[j] <= pivot){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i + 1],v[high]);
    return i + 1;
}
void quicksort(vector<int>&v, int low , int high){
    if(low >= high) return;
    int pivot =  part(v,low,high);
    quicksort(v,low, pivot - 1);
    quicksort(v,pivot + 1, high);
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    quicksort(v,0,n- 1);
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}