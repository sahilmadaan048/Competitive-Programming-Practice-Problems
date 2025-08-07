// https://codeforces.com/problemset/problem/363/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> temp(n);
    
    for (int i = 0; i < n; i++) {
        cin >> temp[i];
    }

    // Create the prefix sum array
    vector<int> prefix(n);
    prefix[0] = temp[0];
    
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + temp[i];
    }

    // Initialize variables to find the minimum sum and the starting index
    int min_sum = prefix[k - 1];  // Initial sum of the first 'k' planks
    int min_index = 0;

    // Iterate through the array using the prefix sum to find the minimum sum of 'k' consecutive planks
    for (int i = 1; i <= n - k; i++) {
        int current_sum = prefix[i + k - 1] - prefix[i - 1];  // Sum of k planks starting from index i
        
        if (current_sum < min_sum) {
            min_sum = current_sum;
            min_index = i;
        }
    }

    cout << min_index + 1 << endl;  // Convert to 1-based index for output
    return 0;
}
