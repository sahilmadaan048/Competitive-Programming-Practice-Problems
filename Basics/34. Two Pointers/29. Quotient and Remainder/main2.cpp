#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> q(n);
    vector<int> r(n);

    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }

    sort(q.rbegin(), q.rend());
    sort(r.begin(), r.end());

    int i = 0;
    int j = 0;
    int answer = 0;

    while (i < n && j < n) {

        __int128 value = (__int128)q[i] * (r[j] + 1) + r[j];

        if (value <= k) {
            answer++;
            i++;
            j++;
        } else {
            // q[i] is too large even for the smallest remainder.
            // It cannot be paired with any remaining remainder.
            i++;
        }
    }

    cout << answer << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}