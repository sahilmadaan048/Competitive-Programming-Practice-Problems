// https://cses.fi/problemset/task/1697

// Author - sahilmadaan048

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


void solve(){
   int n;
   cin >> n;
   vector<long long> a(n);
   long long sum = 0;
 
   for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
   }

   if (sum % 2) {
      cout << "IMPOSSIBLE\n";
      return;
   }

   priority_queue<pair<long long, int>> pq;
   
   for (int i = 0; i < n; i++) {
      if (a[i] > 0) pq.push({a[i], i + 1});
   }

   vector<pair<int, int>> ans;
   
   while (!pq.empty()) {
      auto [d, u] = pq.top();
      pq.pop();
      if (d > pq.size()) {
         cout << "IMPOSSIBLE\n";
         return;
      }
      vector<pair<long long, int>> tmp;
      for (int k = 0; k < d; k++) {
         auto [d2, v] = pq.top();
         pq.pop();
         ans.push_back({u, v});
         d2--;
         if (d2 > 0) tmp.push_back({d2, v});
      }
   
      for (auto& x : tmp) {
         pq.push(x);
      }
   }
   cout << ans.size() << "\n";
   
   for (auto& p : ans) {
      cout << p.first << " " << p.second << "\n";
   }

   return;
}

int32_t main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int T = 1;
   while (T--)
   {
    solve();
}
return 0;
}
