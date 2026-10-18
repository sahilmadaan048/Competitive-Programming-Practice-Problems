// https://codeforces.com/contest/1707/problem/B

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
   int n; cin >> n;

   vector<int> a(n);

   for(int i=0; i<n; i++) {
      cin >> a[i];
   }      

   sort(a.begin(), a.end());

   vector<int> values;

   for(int i=0; i<n; i++) {
      if(i == 0 or a[i] != a[i-1]) {
         values.push_back(a[i]);
      }
   }

   int len = n;

   while(len > 1 and values.size() > 2) {
      vector<int> nextValues;

      if(len > (int)values.size()) {
         nextValues.push_back(0);
      }

      for(int i=1; i<(int) values.size(); i++) {
         nextValues.push_back(values[i] - values[i-1]);
      }


      sort(nextValues.begin(), nextValues.end());

      nextValues.erase(unique(nextValues.begin(), nextValues.end()), nextValues.end());

      values = nextValues;
      len -= 1;
   }

   if(len == 1) {
      cout << values[0] << endl;
   }

   else if(values.size() == 1) {
      cout << 0 << endl;
   }
   else {
      cout << values[1] - values[0] << endl;
   }


   return;
}  

int32_t main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int T = 1;
   cin >> T;
   while (T--)
   {
    solve();
}
return 0;
}
