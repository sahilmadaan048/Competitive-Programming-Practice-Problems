// https://codeforces.com/edu/course/2/lesson/7/2/practice/contest/289391/problem/D

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
    vector<int> parent;
    DSU(int n) {
        parent.resize(n+1);
        for(int i=1;i<=n;i++) parent[i]=i; // everyone is own boss initially
    }

    int find_set(int a) {
        if(parent[a]==a) return a;
        return parent[a] = find_set(parent[a]); // path compression
    }

    // boss a becomes subordinate of boss b
    void make_subordinate(int a, int b) {
        parent[a] = b;
    }

    // count superiors from v to root boss
    int count_sup(int v) {
        int cnt = 0;
        int cur = v;
        while(cur != parent[cur]) {
            cur = parent[cur];
            cnt++;
        }
        return cnt;
    }
};

void solve(){
    int n,m; cin >> n >> m;
    DSU dsu(n);

    while(m--) {
        int t; cin >> t;
        if(t==1) {
            int a,b; cin >> a >> b;
            dsu.make_subordinate(a,b);  
        } else {
            int c; cin >> c;
            cout << dsu.count_sup(c) << "\n";
        }
    }
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

    