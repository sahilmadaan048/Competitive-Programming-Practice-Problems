// https://codeforces.com/edu/course/2/lesson/7/2/practice/contest/289391/problem/F


#include "bits/stdc++.h"
using namespace std;

struct DSU {
    vector<int> parent, sz;
    DSU(int n) {
        parent.resize(n+1);
        sz.assign(n+1,1);
        for(int i=1;i<=n;i++) parent[i]=i;
    }

    int find_set(int a) {
        if(parent[a]==a) return a;
        return parent[a] = find_set(parent[a]);
    }

    bool union_sets(int a, int b) {
        a = find_set(a);
        b = find_set(b);
        if(a==b) return false;
        if(sz[a]<sz[b]) swap(a,b);
        parent[b] = a;
        sz[a]+=sz[b];
        return true;
    }
};

void solve(){
    int n,m; cin >> n >> m;
    vector<tuple<int,int,int>> edges(m);
    for(int i=0;i<m;i++){
        int u,v,w; cin >> u >> v >> w;
        edges[i] = {w,u,v};
    }

    sort(edges.begin(), edges.end()); // sort by weight

    int ans = INT_MAX;
    bool found = false;

    for(int l=0;l<m;l++){
        DSU dsu(n);
        int components = n;
        int min_w = get<0>(edges[l]);
        int max_w = min_w;

        for(int r=l;r<m;r++){
            auto [w,u,v] = edges[r];
            if(dsu.union_sets(u,v)) components--;
            max_w = w;
            if(components==1){
                ans = min(ans, max_w - min_w);
                found = true;
                break; // window l to r connects all
            }
        }
    }

    if(found){
        cout << "YES\n" << ans << "\n";
    } else {
        cout << "NO\n";
    }

    return;
}


int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

    