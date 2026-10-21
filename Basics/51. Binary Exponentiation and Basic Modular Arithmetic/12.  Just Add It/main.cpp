// https://www.spoj.com/problems/ZSUM/

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
int mod=1e7+7;      // Hardcoded, directly change from here for functions!

template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================

//Zn + Zn-1 - 2Zn-2 = n^k + 2*(n-1)^k + n^n + 2*(n-1)^(n-1)

int expo(int a, int b)
{
    a %= mod;
    int result = 1;
    while (b)
    {
        if (b & 1)
        {
            result *= a;
            result %= mod;
        }
        b /= 2;
        a *= a;
        a %= mod;
    }

    return result;
}

void solve(){
       int n, k;
    while (cin >> n >> k)
    {

        if (n == 0 && k == 0)
            break;

        int ans = expo(n, k) + 2*expo(n - 1, k) + expo(n, n) + 2*expo(n - 1, n - 1);
        cout << ans % mod << "\n";
    }
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
