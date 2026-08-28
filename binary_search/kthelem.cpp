#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> n1(n);
    for (int i = 0; i < n; i++) cin >> n1[i];
    int m;
    cin >> m;
    vector <int> n2(m);
    for (int i = 0; i < m; i++) cin >> n2[i];
    int target;
    cout << "What would you need to find: ";
    cin >> target;
    int answer;
    int low = max(0, target - m);
    int high = min(m , target);
    while(low <= high){
        int cut1 =  (low + high) / 2;
        int cut2 = target - cut1;

        int l1 = (cut1 == 0) ? INT_MIN : n1[cut1 - 1];
        int l2 = (cut2 == 0) ? INT_MIN : n2[cut2 - 1];
        
        int r1 = (cut1 == n) ? INT_MAX : n1[cut1];
        int r2 = (cut2 == m) ? INT_MAX : n2[cut2];

        if(l1 <= r2 && l2 <= r1){
            answer = max(l1, l2);
            cout << answer << endl;
            return 0;
        }
        else if(l1 > r2){
            high = cut1 - 1;
        }
        else{
            low = cut1 + 1;
        }
    }
    
    return 0;
}