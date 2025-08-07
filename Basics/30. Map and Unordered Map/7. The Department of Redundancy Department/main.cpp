// https://vjudge.net/problem/UVA-484

#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, int> mpp;  // To count occurrences of each number
    vector<int> order;            // To maintain the order of appearance

    int n;
    while (cin >> n) { // Read input until the end
        if (mpp.find(n) == mpp.end()) {
            order.push_back(n); // Keep track of the first occurrence order
        }
        mpp[n]++; // Increment the count of the number
    }

    // Print the numbers in the order they first appeared
    for (int num : order) {
        cout << num << " " << mpp[num] << "\n";
    }

    return 0;
}

