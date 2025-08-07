// https://codeforces.com/problemset/problem/5/C

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     int n = s.size();

//     stack<int> st;
//     st.push(-1); // Initial base index for valid substring calculation
//     int max_len = 0;
//     int count = 0;

//     for (int i = 0; i < n; i++) {
//         if (s[i] == '(') {
//             st.push(i);
//         } else {
//             if (!st.empty()) {
//                 st.pop();
//             }
            
//             if (!st.empty()) {
//                 int current_len = i - st.top();
//                 if (current_len > max_len) {
//                     max_len = current_len;
//                     count = 1; // Reset count for new maximum length
//                 } else if (current_len == max_len) {
//                     count++;
//                 }
//             } else {
//                 st.push(i); // Push the current index to mark the new base
//             }
//         }
//     }

//     cout << max_len << " " << count << "\n";
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    stack<int> st;
    st.push(-1); // Initial base index for valid substring calculation
    int max_len = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            // Pop from stack since a ')' was found
            if (!st.empty()) {
                st.pop();
            }
            
            // If stack is not empty, compute the length of valid parentheses
            if (!st.empty()) {
                int current_len = i - st.top();
                if (current_len > max_len) {
                    max_len = current_len;
                    count = 1; // Reset count for the new maximum length
                } else if (current_len == max_len) {
                    count++; // Increment count for the current maximum length
                }
            } else {
                // If stack is empty, push the current index as base for future valid substrings
                st.push(i);
            }
        }
    }

    // If no valid substring found, the output should be 0 1
    if (max_len == 0) {
        cout << "0 1\n";
    } else {
        cout << max_len << " " << count << "\n";
    }

    return 0;
}
