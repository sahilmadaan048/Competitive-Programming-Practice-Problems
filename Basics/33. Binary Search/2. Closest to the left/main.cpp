// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B

#include <iostream>
#include <vector>

using namespace std;

// Function to perform binary search to find the maximum index
int binary_search(const vector<int>& array, int query) {
    int left = 0, right = array.size() - 1;
    int result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (array[mid] <= query) {
            result = mid; // Update result if array[mid] <= query
            left = mid + 1; // Move to the right half
        } else {
            right = mid - 1; // Move to the left half
        }
    }
    
    return result + 1; // Convert to 1-based index
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    vector<int> queries(k);
    for (int i = 0; i < k; ++i) {
        cin >> queries[i];
    }

    for (int q : queries) {
        // Use binary search to find the maximum index for each query
        int idx = binary_search(array, q);
        // Output the result for the current query
        cout << (idx > 0 ? idx : 0) << '\n';
    }

    return 0;
}
