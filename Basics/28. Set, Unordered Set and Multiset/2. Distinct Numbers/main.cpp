// https://cses.fi/problemset/task/1621

 
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); // Speeds up input/output
    cin.tie(0);                   // Unties cin and cout
 
    int n;
    cin >> n;
    
    set<int> distinct_values;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        distinct_values.insert(x);
    }
 
    // Output the number of distinct values
    cout << distinct_values.size() << endl;
    
    return 0;
}
