#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int> v, int s, int mid){
    int stu_taken = 1;
    int total = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > mid) return false;
        total = total + v[i];
        if(total > mid){
            stu_taken++;
            total = v[i];
        }
        else{
            continue;
        }
    }
    if(stu_taken <= s){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    int ans = -1;
    vector<int> pages(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pages[i];
    }
    int stu;
    cout << "How many students: ";
    cin >> stu;
    if(stu > n) return ans;
    int sum = 0;
    int mx = *max_element(pages.begin(), pages.end());
    for(int i = 0; i < n; i++){
        sum = sum + pages[i];
    } 
    int low = mx;
    int high = sum;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(possible(pages,stu,mid)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << "Answer : " << ans << endl;
    return 0;
} 
