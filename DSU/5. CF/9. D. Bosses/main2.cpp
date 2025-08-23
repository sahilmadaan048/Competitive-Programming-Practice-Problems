#include "bits/stdc++.h"
using namespace std;

struct DSU {
    vector<int> parent, depth;
    DSU(int n) {
        parent.resize(n + 1);
        depth.assign(n + 1, 0);
        for (int i = 1; i <= n; i++) parent[i] = i; // initially everyone is their own boss
    }

    // find root boss of v with path compression
    int find_set(int v) {
        if (v == parent[v]) return v;
        int p = parent[v];
        parent[v] = find_set(parent[v]);   // path compression
        depth[v] += depth[p];             // accumulate depth
        return parent[v];
    }

    void make_subordinate(int a, int b) {
        // make boss a a subordinate of boss b
        parent[a] = b;
        depth[a] = 1; // directly reports to b
    }

    int get_depth(int v) {
        find_set(v);       // path compression updates depth[v]
        return depth[v];
    }
};

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    DSU dsu(n);

    while (m--) {
        int t; cin >> t;
        if (t == 1) {
            int a, b; cin >> a >> b;
            dsu.make_subordinate(a, b);
        } else {
            int c; cin >> c;
            cout << dsu.get_depth(c) << "\n";
        }
    }
}
