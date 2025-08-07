// https://cses.fi/problemset/task/1661
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<long long, int> prefix_count;  // Map to store count of prefix sums
    long long current_sum = 0;
    int result = 0;

    prefix_count[0] = 1;  // Initialize prefix sum 0 to handle cases where subarray starts from the beginning

    for (int i = 0; i < n; i++) {
        current_sum += a[i];  // Update the current prefix sum

        // Check if there is a prefix sum that would make the current sum equal to x
        if (prefix_count.find(current_sum - x) != prefix_count.end()) {
            result += prefix_count[current_sum - x];  // Add the count of such prefix sums
        }

        // Increment the count of the current prefix sum in the map
        prefix_count[current_sum]++;
    }

    cout << result << endl;
    return 0;
}
