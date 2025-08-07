
// https://judge.yosupo.jp/problem/static_range_sum

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    vector<long long> A(N);
    vector<long long> prefixSum(N);

    // Read the array elements
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Compute prefix sums
    prefixSum[0] = A[0];
    for (int i = 1; i < N; ++i) {
        prefixSum[i] = prefixSum[i - 1] + A[i];
    }

    // Process each query
    while (Q--) {
        int l, r;
        cin >> l >> r;
        
        // Calculate the sum from index l to r-1
        long long sum = (l == 0) ? prefixSum[r - 1] : (prefixSum[r - 1] - prefixSum[l - 1]);
        cout << sum << '\n';
    }

    return 0;
}

