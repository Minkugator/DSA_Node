#include<bits/stdc++.h>
using namespace std;
void generate(int n, string current){
    if(current.length() == n){
        cout << current << '\n';
        return;
    }
    generate(n, current + '0');
    if(current.empty() || current.back() != '1'){
        generate(n, current + '1');
    }
}
int main(){
    int n;
    cin >> n;
    generate(n,"");
    return 0;
}