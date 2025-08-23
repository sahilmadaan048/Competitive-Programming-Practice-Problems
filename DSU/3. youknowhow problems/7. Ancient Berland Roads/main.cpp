// https://www.codechef.com/problems/ABROADS

#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <numeric>
#include <set>
using namespace std;

struct DSU {
    vector<int> p, sz;
    vector<long long> sum; // population sum per root
    multiset<long long> compVals; // to track max component sum

    DSU(int n, const vector<long long>& pop) {
        p.resize(n+1);
        sz.assign(n+1, 1);
        sum = pop;
        iota(p.begin(), p.end(), 0);
        for (int i = 1; i <= n; i++) compVals.insert(sum[i]);
    }

    int find(int x) { return p[x]==x ? x : p[x]=find(p[x]); }

    void unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return;
        if (sz[a] < sz[b]) swap(a, b);

        // remove old values
        compVals.erase(compVals.find(sum[a]));
        compVals.erase(compVals.find(sum[b]));

        p[b] = a;
        sz[a] += sz[b];
        sum[a] += sum[b];

        compVals.insert(sum[a]);
    }

    void updatePop(int v, long long newVal) {
        int r = find(v);
        compVals.erase(compVals.find(sum[r]));
        sum[r] += (newVal - (sum[v] - (sum[r]-sum[v]))); // too complex? easier below
    }
};

struct Query {
    char type; // 'D' or 'P'
    int a, b;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,q;
    cin >> n >> m >> q;

    vector<long long> pop(n+1);
    for (int i=1;i<=n;i++) cin >> pop[i];

    vector<pair<int,int>> edges(m+1);
    for (int i=1;i<=m;i++) cin >> edges[i].first >> edges[i].second;

    vector<Query> queries(q);
    vector<int> deleted(m+1,0);
    vector<long long> oldPop(q); // to store previous values for P queries

    for (int i=0;i<q;i++) {
        char c; cin >> c;
        if (c=='D') {
            int k; cin >> k;
            queries[i] = {c,k,0};
            deleted[k]=1;
        } else {
            int a; long long x;
            cin >> a >> x;
            queries[i] = {c,a,(int)x};
            oldPop[i] = pop[a]; // remember old population
            pop[a] = x; // apply it forward, so final pops known
        }
    }

    // At this point, `pop` has final populations after all queries.
    // Build DSU with final populations.
    DSU dsu(n,pop);

    // Add edges that were never deleted
    for (int i=1;i<=m;i++) if (!deleted[i]) dsu.unite(edges[i].first, edges[i].second);

    vector<long long> ans(q);

    // Process backwards
    for (int i=q-1;i>=0;i--) {
        ans[i] = *dsu.compVals.rbegin(); // max value
        if (queries[i].type=='D') {
            int k=queries[i].a;
            dsu.unite(edges[k].first, edges[k].second);
        } else {
            int a=queries[i].a; long long oldVal=oldPop[i];
            int r = dsu.find(a);
            dsu.compVals.erase(dsu.compVals.find(dsu.sum[r]));
            dsu.sum[r] += (oldVal - pop[a]); // revert population change
            pop[a] = oldVal; // restore pop[a]
            dsu.compVals.insert(dsu.sum[r]);
        }
    }

    for (int i=0;i<q;i++) cout << ans[i] << "\n";
}
