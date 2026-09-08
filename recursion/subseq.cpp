#include <bits/stdc++.h>
using namespace std;
void subseqgenerator(string& s , int current, unordered_set<string>& ans, string& initial){
    if(current == initial.size()){
        ans.insert(s);
        return;
    }
    // take
    s.push_back(initial[current]);
    subseqgenerator(s, current + 1, ans, initial);
    s.pop_back();
    //omit
    subseqgenerator(s,current + 1, ans, initial);

}

int main(){
    string s = "abc";
    int n = s.length();
    unordered_set<string> result;
    string temp = "";
    subseqgenerator(temp,0,result,s);
    for(const string& cur : result){
        cout << (cur.empty() ? "{empty}" : cur) << endl; 
    }
    return 0;
}