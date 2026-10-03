// https://codeforces.com/problemset/problem/1896/C

// Author - sahilmadaan048

// Author - sahilmadaan048

#include "bits/stdc++.h"
#define int long long

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> id(n);
    vector<int> ans(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for(int i = 0; i < n; i++) {
        id[i] = i;
    }

    sort(id.begin(), id.end(), [&](int l, int r) {
        return a[l] < a[r];
    });

    sort(b.begin(), b.end());

    // Put the smallest x elements of b
    // against the largest x elements of a
    for(int i = 0; i < x; i++) {
        ans[id[n - x + i]] = b[i];
    }

    // Put the remaining elements
    // against the remaining positions
    for(int i = x; i < n; i++) {
        ans[id[i - x]] = b[i];
    }

    int beauty = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] > ans[i]) {
            beauty++;
        }
    }

    if(beauty != x) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    cout << "\n";
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