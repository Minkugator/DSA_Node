#include <bits/stdc++.h>
using namespace std;
int atmost(const string& sr, int k){
    int low = 0;
    int diff = 0;
    int ans = 0;
    vector<int> freq(26,0);
    for(int high = 0; high < sr.size(); high++){
        if(freq[sr[high] - 'a'] == 0){
            diff++;
        }
        freq[sr[high] - 'a']++;
        while(diff > k){
            freq[sr[low ]- 'a']--;
            if(freq[sr[low] - 'a'] == 0){
                diff--;
            }
            low++;  
        }
        ans += high - low + 1;
    }
    return ans;
}


int main(){
    string s;
    cin >> s;
    int distinct;
    cin >> distinct;
    int n = s.size();
    cout << s << endl;

    cout << "The Valid Substrings are: "<< atmost(s,distinct)  - atmost(s,distinct - 1) ;
    }

