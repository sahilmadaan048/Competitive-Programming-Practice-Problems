// https://codeforces.com/problemset/problem/1475/D

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
   int n, m; cin >> n >> m;

   vector<int> memory(n), cost(n);

   for(int i=0; i<n; i++) cin >> memory[i];
   for(int i=0; i<n; i++) cin >> cost[i];

   vector<int> one, two;

   for(int i=0; i<n; i++) {
      if(cost[i] == 1) {
         one.push_back(memory[i]);
      }
      else {
         two.push_back(memory[i]);
      }
   }

   sort(one.rbegin(), one.rend());
   sort(two.rbegin(), two.rend());

   vector<int> prefixOne(one.size()+1, 0);
   vector<int> prefixTwo(two.size()+1, 0);

   for (int i = 0; i < one.size(); i++) {
        prefixOne[i + 1] = prefixOne[i] + one[i];
   }

   for (int i = 0; i < two.size(); i++) {
        prefixTwo[i + 1] = prefixTwo[i] + two[i];
   }

   int answer = LLONG_MAX;

   int j = one.size();

   for (int i = 0; i <= two.size(); i++) {

        int memoryFromTwo = prefixTwo[i];

        if (memoryFromTwo >= m) {
            answer = min(answer, 2 * i);
            break;
        }

        int remaining = m - memoryFromTwo;

        while (j > 0 && prefixOne[j - 1] >= remaining) {
            j--;
        }

        if (prefixOne[j] >= remaining) {
            answer = min(answer, 2 * i + j);
        }
    }

    if(answer == LLONG_MAX) {
      cout << -1 << endl;
    }
    else {
      cout << answer << endl;
    }

    return;
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
