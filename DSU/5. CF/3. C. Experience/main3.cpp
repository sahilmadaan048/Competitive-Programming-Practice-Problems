#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct DSU {
    vector<int> parent, sz;
    vector<ll> add, delta; // add[root] = total added to set; delta[v] = xp(v) - add[parent[v]]

    DSU(int n) : parent(n+1), sz(n+1,1), add(n+1,0), delta(n+1,0) {
        for(int i=1;i<=n;i++) parent[i]=i;
    }

    int find(int v) {
        if (parent[v] == v) return v;
        int p = parent[v];
        parent[v] = find(p);
        delta[v] += delta[p];   // PROPAGATE parent's delta, not add[parent]
        return parent[v];
    }

    void unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return;
        if (sz[a] < sz[b]) swap(a,b);
        parent[b] = a;
        // make invariant hold: xp(b) was add[b], after attach we need delta[b] so that
        // add[a] + delta[b] == add[b]  => delta[b] = add[b] - add[a]
        delta[b] = add[b] - add[a];
        sz[a] += sz[b];
    }

    void add_exp(int x, ll v) {
        int r = find(x);
        add[r] += v;
    }

    ll get(int x) {
        find(x);
        int r = parent[x];
        return add[r] + delta[x];
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    if (!(cin >> n >> m)) return 0;
    DSU dsu(n);
    while (m--) {
        string op; cin >> op;
        if (op == "join") {
            int x, y; cin >> x >> y;
            dsu.unite(x, y);
        } else if (op == "add") {
            int x; ll v; cin >> x >> v;
            dsu.add_exp(x, v);
        } else { // get
            int x; cin >> x;
            cout << dsu.get(x) << '\n';
        }
    }
    return 0;
}
