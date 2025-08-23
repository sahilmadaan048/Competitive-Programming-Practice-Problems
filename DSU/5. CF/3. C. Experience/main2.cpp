#include "bits/stdc++.h"
#define int long long
using namespace std;

struct DSU {
    vector<int> parent, size, experience;

    DSU(int n) {
        parent.resize(n + 1);
        size.assign(n + 1, 1);
        experience.assign(n + 1, 0);
        for (int i = 1; i <= n; i++) parent[i] = i;
    }

    int find_set(int a) {
        if (parent[a] == a) return a;
        return parent[a] = find_set(parent[a]);
    }

    void union_sets(int a, int b) {
        a = find_set(a);
        b = find_set(b);
        if (a == b) return;
        if (size[a] < size[b]) swap(a, b);
        // move b under a -> transfer b's experience into a
        parent[b] = a;
        size[a] += size[b];
        experience[a] += experience[b];   // <-- crucial: transfer accumulated points
        // experience[b] can remain as-is (not used since b is no longer a root)
    }

    void add_points(int a, int v) {
        int r = find_set(a);
        experience[r] += v;
    }

    int get_experience(int a) {
        return experience[find_set(a)];
    }
};

void solve() {
    int n, m; cin >> n >> m;
    DSU dsu(n);
    string s;
    while (m--) {
        cin >> s;
        if (s == "add") {
            int u, v; cin >> u >> v;
            dsu.add_points(u, v);
        } else if (s == "join") {
            int u, v; cin >> u >> v;
            dsu.union_sets(u, v);
        } else { // get
            int v; cin >> v;
            cout << dsu.get_experience(v) << '\n';
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
