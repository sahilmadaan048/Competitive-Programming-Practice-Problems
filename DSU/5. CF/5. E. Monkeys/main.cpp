// https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/problem/E

#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define bin(x,y)  bitset<y>(x) 
using namespace std;
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!



void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================


struct DSU {
    vector<int> parent, sz;
    vector<vector<int>> members;
    vector<bool> hasLeader;

    DSU(int n) {
        parent.resize(n+1);
        sz.assign(n+1,1);
        members.resize(n+1);
        hasLeader.assign(n+1,false);
        for(int i=1;i<=n;i++) {
            parent[i]=i;
            members[i].push_back(i);
        }
        hasLeader[1]=true; // leader monkey 1
    }

    int find(int v) {
        return parent[v]==v?v:parent[v]=find(parent[v]);
    }

    void unite(int a, int b, int time, vector<int>& fall) {
        a=find(a); b=find(b);
        if(a==b) return;
        if(sz[a]<sz[b]) swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];

        // merge member lists
        if(hasLeader[a] && !hasLeader[b]) {
            // all in b will fall at 'time'
            for(int x: members[b]) if(fall[x]==-1) fall[x]=time;
        } else if(!hasLeader[a] && hasLeader[b]) {
            for(int x: members[a]) if(fall[x]==-1) fall[x]=time;
        }

        hasLeader[a] = hasLeader[a] || hasLeader[b];
        // merge members
        if(members[b].size() > members[a].size()) swap(members[a], members[b]);
        for(int x: members[b]) members[a].push_back(x);
        members[b].clear();
    }
};


void solve(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> hands(n+1);
    for(int i=1;i<=n;i++){
        int l,r;cin>>l>>r;
        hands[i]={l,r};
    }

    vector<pair<int,int>> ops(m);
    vector<vector<int>> release_time(n+1, vector<int>(3,-1));
    for(int j=0;j<m;j++){
        int p,h;cin>>p>>h;
        ops[j]={p,h};
        release_time[p][h]=j; // released at time j
    }

       // edges that survive until the end (never released)
    vector<pair<int,int>> edges;
    for(int i=1;i<=n;i++){
        for(int h=1;h<=2;h++){
            int v = (h==1?hands[i].first:hands[i].second);
            if(v==-1) continue;
            if(release_time[i][h]==-1){ // never released
                edges.push_back({i,v});
            }
        }
    }

    DSU dsu(n);
    vector<int> fall(n+1,-1);

    // add edges that never cut
    for(auto [u,v]: edges) dsu.unite(u,v,m,fall);

    // process releases backwards
    for(int t=m-1;t>=0;t--){
        int p=ops[t].first, h=ops[t].second;
        int v = (h==1?hands[p].first:hands[p].second);
        if(v==-1) continue;
        dsu.unite(p,v,t,fall);
    }

    for(int i=1;i<=n;i++) cout<<fall[i]<<'\n';

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

    