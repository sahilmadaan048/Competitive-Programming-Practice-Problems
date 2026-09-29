// https://codeforces.com/contest/1777/problem/C

// Author - sahilmadaan048

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<vector<int>> divisors(n);

    vector<int> possible(m + 1, 0);

    for (int i = 0; i < n; i++) {
        int x = a[i];

        for (int d = 1; d * d <= x; d++) {
            if (x % d != 0) {
                continue;
            }

            if (d <= m) {
                divisors[i].push_back(d);
                possible[d] = 1;
            }

            int other = x / d;

            if (other != d && other <= m) {
                divisors[i].push_back(other);
                possible[other] = 1;
            }
        }
    }

    // If some topic from 1 to m is not covered by any student,
    // then no valid team exists.
    for (int d = 1; d <= m; d++) {
        if (possible[d] == 0) {
            cout << -1 << '\n';
            return;
        }
    }

    vector<int> cnt(m + 1, 0);

    int covered = 0;
    int left = 0;

    int answer = LLONG_MAX;

    for (int right = 0; right < n; right++) {

        // Add a[right] to the current window.
        for (int d : divisors[right]) {
            if (cnt[d] == 0) {
                covered++;
            }

            cnt[d]++;
        }

        // Try to shrink the window from the left.
        while (covered == m) {

            answer = min(answer, a[right] - a[left]);

            for (int d : divisors[left]) {
                cnt[d]--;

                if (cnt[d] == 0) {
                    covered--;
                }
            }

            left++;
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