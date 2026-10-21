// https://codeforces.com/problemset/problem/1731/B

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


// const int MOD = 1e9 + 7;

int modpow(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void solve(){
    int n; cin >> n;
    
    /*

    max number of demigods that can be killed * 2022 % mod

    1   2   3   4  5
    2   4   6   8  10
    3   6   9   12 15
    12  8   12  16 20
    5   10  15  20 25

    */
    // (2) (1 + 3 + 6 + 10)
    // s1 = 1 + 3 + 6 + 10;;;;
    // s2 =     1 + 3 +  6 + 10 ;;;
    // ---------------------------
    // s1 - s2 = 0 = 1 + 2 + 3 + 4........n

    /*
    ans should be sum of squares + (sum of squars - sum of numbers) till n

    */

    // sum of k = n(n+1)/2
    int sum_k = n * (n + 1) / 2 % MOD;

    // sum of k^2 = n(n+1)(2n+1)/6
    int sum_k2 = n * (n + 1) % MOD * (2 * n + 1) % MOD;
    sum_k2 = sum_k2 * modpow(6, MOD - 2) % MOD;

    // S = sum k*(2k-1) = 2*sum(k^2) - sum(k)
    int S = (2 * sum_k2 % MOD - sum_k + MOD) % MOD;

    int ans = S * 2022 % MOD;
    cout << ans << "\n";
}

int32_t main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int T ; cin >> T;
   while (T--)
   {
    solve();
}
return 0;
}