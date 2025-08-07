// https://vjudge.net/problem/Aizu-ITP2_1_D

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // To speed up input/output
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    
    // Initialize vector of vectors to store n dynamic arrays
    vector<vector<int>> arrays(n);
    
    vector<string> output; // To store output lines
    
    while (q--) {
        int type, t;
        cin >> type >> t;
        
        if (type == 0) { // pushBack
            int x;
            cin >> x;
            arrays[t].push_back(x);
        } else if (type == 1) { // dump
            if (arrays[t].empty()) {
                output.push_back("");
            } else {
                stringstream ss;
                for (size_t i = 0; i < arrays[t].size(); ++i) {
                    if (i > 0) ss << " ";
                    ss << arrays[t][i];
                }
                output.push_back(ss.str());
            }
        } else if (type == 2) { // clear
            arrays[t].clear();
        }
    }
    
    // Output all the results
    cout << accumulate(output.begin(), output.end(), string(), [](const string& a, const string& b) {
        return a + (a.empty() ? "" : "\n") + b;
    }) << endl;
    
    return 0;
}
