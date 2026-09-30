// https://codeforces.com/problemset/problem/2161/C

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
#define srt(v) sort(v.begin(),v.end())

using namespace std;

void solve(){

    int n, x;
    cin >> n >> x;

    vi a(n);
    for(int i=0; i<n; i++) {
      cin >> a[i];
    }

    srt(a);

    int l = 0, r = n - 1;
    int sum = 0;
    int ans = 0;

    vi res;

    while(l <= r){

        if((sum + a[r]) / x > sum / x){

            ans += a[r];
            sum += a[r];

            res.push_back(a[r]);
            r--;

        }
        else{

            sum += a[l];

            res.push_back(a[l]);
            l++;
        }
    }

    cout << ans << endl;

    for(auto x : res){
        cout << x << " ";
    }

    nl;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}