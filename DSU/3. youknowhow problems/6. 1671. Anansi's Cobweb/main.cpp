// https://acm.timus.ru/problem.aspx?space=1&num=1671

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

struct DSU {
    vector<int> p, sz;
    DSU(int n): p(n+1), sz(n+1,1) { iota(p.begin(), p.end(), 0); }
    int find(int x){ return p[x]==x ? x : p[x]=find(p[x]); }
    bool unite(int a,int b){
        a=find(a); b=find(b);
        if(a==b) return false;
        if(sz[a]<sz[b]) swap(a,b);
        p[b]=a; sz[a]+=sz[b];
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin>>n>>m;
    vector<pair<int,int>> edges(m+1);
    for(int i=1;i<=m;i++) cin>>edges[i].first>>edges[i].second;

    int q; cin>>q;
    vector<int> del(q), ans(q);
    vector<char> removed(m+1,0);
    for(int i=0;i<q;i++){ cin>>del[i]; removed[del[i]]=1; }

    DSU dsu(n);
    int comps=n;
    for(int i=1;i<=m;i++) if(!removed[i] && dsu.unite(edges[i].first, edges[i].second)) comps--;

    for(int i=q-1;i>=0;i--){
        ans[i]=comps;
        if(dsu.unite(edges[del[i]].first, edges[del[i]].second)) comps--;
    }

    for(int i=0;i<q;i++) cout<<(i?" ":"")<<ans[i];
    cout<<"\n";
}
