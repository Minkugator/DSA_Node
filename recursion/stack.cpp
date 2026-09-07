#include <stack>
#include <bits/stdc++.h>
using namespace std;
void sortedinsert(stack<int>& s, int big){
    if(s.empty() || s.top() < big){
        s.push(big);
        return;
    }
    int bigger = s.top();
    s.pop();
    sortedinsert(s,big);

    s.push(bigger);
}

void sortstack(stack<int>& s){
    if(s.empty()) return;
    int temp = s.top();
    s.pop();

    sortstack(s);

    sortedinsert(s,temp);
}

void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    stack<int> s;
    cout << "Enter the elements (first entered will be at the bottom): ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.push(val);
    }

    cout << "\nOriginal stack (top to bottom): ";
    printStack(s);

    sortstack(s);

    cout << "Sorted stack (top to bottom): ";
    printStack(s);

    return 0;
}