#include "bits/stdc++.h"
using namespace std;

struct IntervalSet {
    set<pair<int,int>> intervals;
    vector<char> s;
    IntervalSet(string &str) : s(str.begin(), str.end()) {
        int n = s.size();
        int l = 0;
        for (int i = 1; i <= n; i++) {
            if (i == n || s[i] != s[i-1]) {
                intervals.insert({l, i-1});
                l = i;
            }
        }
    }

    // find interval containing idx
    set<pair<int,int>>::iterator find_interval(int idx) {
        auto it = intervals.upper_bound({idx, INT_MAX});
        if (it == intervals.begin()) return intervals.end();
        --it;
        if (it->first <= idx && idx <= it->second) return it;
        return intervals.end();
    }

    int query(int idx) {
        if (s[idx] == '#') return 0;
        auto it = find_interval(idx);
        if (it == intervals.end()) return 0;
        return it->second - it->first + 1;
    }

    void remove(int idx) {
        if (s[idx] == '#') return;
        auto it = find_interval(idx);
        if (it == intervals.end()) return;
        int l = it->first, r = it->second;
        intervals.erase(it);
        if (l <= idx-1) intervals.insert({l, idx-1});
        if (idx+1 <= r) intervals.insert({idx+1, r});
        s[idx] = '#';
    }
};

void solve(int tc) {
    string s; cin >> s;
    int q; cin >> q;

    IntervalSet iv(s);

    cout << "Case " << tc << ":\n";
    while (q--) {
        int t, i; cin >> t >> i;
        if (t == 1) {
            cout << iv.query(i) << "\n";
        } else {
            iv.remove(i);
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        solve(tc);
    }
}
