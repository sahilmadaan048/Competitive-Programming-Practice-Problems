// https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/problem/D

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

    DSU(int n) {
        parent.resize(n+1);
        sz.assign(n+1, 1);
        for(int i=1; i<=n; i++) parent[i] = i;
    }

    int find_set(int v) {
        if(parent[v] == v) return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_sets(int a, int b) {
        a = find_set(a);
        b = find_set(b);
        if(a != b) {
            if(sz[a] < sz[b]) swap(a, b);
            parent[b] = a;
            sz[a] += sz[b];
        }
    }

    bool same_set(int a, int b) {
        return find_set(a) == find_set(b);
    }
}; 


struct Query {
    string type;
    int u,  v;
};


void solve(){
    int n, m, k; cin >> n >> m >> k;

    vector<pair<int, int>> edges(m);

    for(int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v;

        edges[i] = {u, v};
    }

    vector<Query> ops(k);

    for(int i=0; i<k; i++) {
        cin >> ops[i].type >> ops[i].u >> ops[i].v;
    }

    DSU dsu(n);
    vector<string> answers;

    for(int i=k-1; i>=0; i--) {
        if(ops[i].type == "cut") {
            dsu.union_sets(ops[i].u, ops[i].v);
        }
        else {
            if(dsu.same_set(ops[i].u, ops[i].v)) answers.push_back("YES");
            else answers.push_back("NO");
        }
    }

    reverse(answers.begin(), answers.end());
    for(auto ele: answers) cout << ele << "\n";


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

    