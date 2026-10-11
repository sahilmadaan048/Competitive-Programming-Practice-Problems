// https://codeforces.com/contest/1829/problem/G

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
   // cout << "n: " << n <<endl;  
   /*
      (-1 + sqrt(1 + 8*n))/ 2
   */ 
   int dim = ceil((-1 + (sqrt(1 + (8*n)))) / 2);
   // cout << "dim: " << dim << endl;

   vector<vector<int>> mat(dim, vector<int>(dim, 0));
   vector<vector<int>> prefSq(dim+1, vector<int>(dim+1, 0));

   int start = 1;


   for(int len = 0; len < dim; len++) {
      int i = 0;
      while(i <= len) {
         mat[len-i][i++] = start++;
      }
   }
   long long ans = 0;

   long long upper = ((dim) * (dim+1)) / 2;
   // cout << "upper: " << upper << endl;

   long long diff = (upper - n);
   // cout << "diff: " << diff << endl;

   long long c = dim - diff;
   long long r = dim + 1 - c;

   // for(long long i=0; i<r; i++) {   
   //    for(long long j=0; j<c;j++) {
   //       ans += 1LL*mat[i][j]*mat[i][j];
   //    }
   // }

   for(int i=0; i<r; i++) {
      for(int j=0; j<c; j++) {
         prefSq[i + 1][j + 1] = mat[i][j] * mat[i][j]
                                   + prefSq[i][j + 1]
                                   + prefSq[i + 1][j]
                                   - prefSq[i][j];
      }
   }

   cout << prefSq[r][c] << endl;
}

int32_t main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int T; cin >> T;
   while (T--)
   {
    solve();
}
return 0;
}
