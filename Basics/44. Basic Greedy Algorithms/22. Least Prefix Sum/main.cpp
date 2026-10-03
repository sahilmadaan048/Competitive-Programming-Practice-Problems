// https://codeforces.com/problemset/problem/1779/C

// Author - sahilmadaan048

#include "bits/stdc++.h"
#define int long long

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;

    // Right side of m
    priority_queue<int> pq;

    int sum = 0;

    for(int i = m; i < n; i++) {
        sum += a[i];

        if(a[i] < 0) {
            pq.push(-a[i]);
        }

        if(sum < 0) {
            int x = pq.top();
            pq.pop();

            sum += 2 * x;
            ans++;
        }
    }

    // Left side of m
    priority_queue<int, vector<int>, greater<int>> pq2;

    sum = 0;

    for(int i = m - 1; i >= 1; i--) {
        sum += a[i];

        if(a[i] > 0) {
            pq2.push(-a[i]);
        }

        if(sum > 0) {
            int x = pq2.top();
            pq2.pop();

            sum += 2 * x;
            ans++;
        }
    }

    cout << ans << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}