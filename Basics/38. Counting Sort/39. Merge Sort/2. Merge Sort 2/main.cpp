// https://vjudge.net/problem/Aizu-ALDS1_5_B
#include<bits/stdc++.h>
using namespace std;

int cnt = 0;  // Counter for comparisons

vector<int> merge(vector<int> &l, vector<int> &r) {
    int n = l.size(), m = r.size();
    vector<int> ans;
    int i = 0, j = 0;

    while (i < n && j < m) {
        // Compare elements from left and right halves
        if (l[i] < r[j]) {
            ans.push_back(l[i++]);
        } else {
            ans.push_back(r[j++]);
        }
        cnt++;  // Count the comparison made here
    }

    // If there are remaining elements in l
    while (i < n) {
        ans.push_back(l[i++]);
        cnt++;  // Count the "comparison" to check if i < n
    }

    // If there are remaining elements in r
    while (j < m) {
        ans.push_back(r[j++]);
        cnt++;  // Count the "comparison" to check if j < m
    }

    return ans;
}

vector<int> a;

vector<int> merge_sort(int l, int r) {
    if (l == r) return {a[l]}; // Base case: single element

    int mid = l + (r - l) / 2; // Better way to calculate mid
    vector<int> left = merge_sort(l, mid);
    vector<int> right = merge_sort(mid + 1, r);
    return merge(left, right);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; 
    cin >> n;
    a.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Input array elements
    }
    
    vector<int> ans = merge_sort(0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << ' '; // Output sorted elements
    }
    
    cout << endl;
    cout << cnt << "\n"; // Output the number of comparisons
    return 0;
}

// https://vjudge.net/problem/Gym-324997D