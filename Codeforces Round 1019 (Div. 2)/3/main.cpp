#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1000000000;

bool check_case1(const vector<int> &b, int n) {
    vector<int> P(n+1);
    P[0] = 0;
    for (int i = 1; i <= n; ++i) {
        P[i] = P[i-1] + b[i];
    }
    vector<array<int,2>> sx(n+2);
    sx[n+1][0] = sx[n+1][1] = -INF;
    for (int i = n; i >= 0; --i) {
        sx[i][0] = sx[i+1][0];
        sx[i][1] = sx[i+1][1];
        if (i >= 1 && i <= n-1) {
            sx[i][i%2] = max(sx[i][i%2], P[i]);
        }
    }
    for (int l = 1; l <= n-2; ++l) {
        int x = P[l], p = l & 1;
        if (x >= (l & 1)) {
            if (sx[l+1][p] >= x || sx[l+1][p^1] >= x + 1) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> a(n+1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        vector<int> b(n+1);
        for (int i = 1; i <= n; ++i) {
            b[i] = (a[i] <= k ? 1 : -1);
        }
        vector<int> P(n+1);
        P[0] = 0;
        for (int i = 1; i <= n; ++i) {
            P[i] = P[i-1] + b[i];
        }
        int min_l = n+1;
        for (int l = 1; l <= n-2; ++l) {
            if (P[l] >= (l & 1)) {
                min_l = min(min_l, l);
            }
        }
        int max_s = 0;
        for (int s = 3; s <= n; ++s) {
            int len = n - s + 1;
            if (P[n] - P[s-1] >= (len & 1)) {
                max_s = max(max_s, s);
            }
        }
        bool ok = false;
        if (min_l <= n-2 && max_s >= 3 && min_l <= max_s - 2) {
            ok = true;
        }
        if (!ok && check_case1(b, n)) {
            ok = true;
        }
        if (!ok) {
            vector<int> br(n+1);
            for (int i = 1; i <= n; ++i) {
                br[i] = b[n-i+1];
            }
            if (check_case1(br, n)) {
                ok = true;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
