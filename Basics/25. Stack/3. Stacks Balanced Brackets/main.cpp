// https://vjudge.net/problem/HackerRank-ctci-balanced-brackets#google_vignette
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    unordered_map<char, int> mp = {
        {'(', -1}, {'[', -2}, {'{', -3}, 
        {')', 1}, {']', 2}, {'}', 3}
    };

    while (t--) {
        string s;
        cin >> s;
        stack<char> st;
        int sum = 0; // Reset sum for each test case
        bool isBalanced = true; // Track if the string is balanced

        for (auto ele : s) {
            if (ele == '(' || ele == '[' || ele == '{') {
                sum += mp[ele];
                st.push(ele);
            } else {
                // Check if the stack is empty before accessing its top element
                if (!st.empty() && ((ele == ')' && st.top() == '(') ||
                                    (ele == ']' && st.top() == '[') ||
                                    (ele == '}' && st.top() == '{'))) {
                    sum += mp[ele];
                    st.pop();
                } else {
                    isBalanced = false; // If mismatch occurs, mark as unbalanced
                    break; // No need to check further
                }
            }
        }

        // Check if sum is zero and all brackets matched properly
        if (isBalanced && sum == 0 && st.empty()) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
