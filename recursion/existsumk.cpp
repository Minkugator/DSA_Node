#include <iostream>
#include <vector>

using namespace std;

void subvecgenerator(const vector<int>& initial, int target, vector<vector<int>>& result, vector<int>& current, int rn, int cursum) {
    // Base case 1: Target reached
    if (cursum == target) {
        result.emplace_back(current);
        return; 
    } 
    
    // Base case 2: Overshot target or reached the end of the array
    if (cursum > target || rn == initial.size()) {
        return;
    }
    
    // TAKE
    current.emplace_back(initial[rn]);
    // Pass the modified sum dynamically; no need to manually subtract later
    subvecgenerator(initial, target, result, current, rn + 1, cursum + initial[rn]);
    current.pop_back(); // Backtrack the vector
    
    // OMIT
    // cursum is completely untouched here, exactly as it should be
    subvecgenerator(initial, target, result, current, rn + 1, cursum);
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    vector<int> v(n, 0);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int target;
    cout << "What sum do we need to find: ";
    cin >> target;
    
    vector<vector<int>> result;
    vector<int> cur;
    
    subvecgenerator(v, target, result, cur, 0, 0);
    
    (result.size() == 0) ? cout << "IMPOSSIBLE" : cout << "Doable fam";
    return 0;
}