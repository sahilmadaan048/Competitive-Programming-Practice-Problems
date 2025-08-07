// https://vjudge.net/problem/HackerRank-cpp-lower-bound

// #include <bits/stdc++.h>
// using namespace std;

// pair<bool, int> check(int num, const vector<int>& temp) {
//     auto it = lower_bound(temp.begin(), temp.end(), num);
//     if (it != temp.end() && *it == num) {
//         return {true, it - temp.begin()};
//     } else {
//         return {false, it - temp.begin()};
//     }
// }

// int main() {
//     int n; 
//     cin >> n;
//     vector<int> temp(n);
//     for (int i = 0; i < n; i++) cin >> temp[i];
    
//     int t; 
//     cin >> t;
//     while (t--) {
//         int a; 
//         cin >> a;
//         auto it = check(a, temp);
//         cout << (it.first ? "Yes" : "No") << " " << it.second + 1 << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int q;
    cin >> q;
    
    while (q--) {
        int query;
        cin >> query;
        
        // Use lower_bound to find the position of the first element not less than query
        auto it = lower_bound(arr.begin(), arr.end(), query);
        
        // Check if the element at this position is the query number
        if (it != arr.end() && *it == query) {
            // If found, print "Yes" and the 1-based index
            cout << "Yes " << (it - arr.begin() + 1) << endl;
        } else {
            // If not found, print "No" and the 1-based index of the next greater element
            cout << "No " << (it - arr.begin() + 1) << endl;
        }
    }
    
    return 0;
}
