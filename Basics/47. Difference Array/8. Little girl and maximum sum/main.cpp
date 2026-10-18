// https://codeforces.com/contest/276/problem/C

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
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())))
#define bin(x,y) bitset<y>(x)

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vi a(n);
   for(int i=0; i<n; i++) cin >> a[i];

    vi freq(n+1, 0);

    while(q--) {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        freq[l]++;

        if(r + 1 < n) {
            freq[r+1]--;
        }
    }

    for(int i = 1; i < n; i++) {
        freq[i] += freq[i-1];
    }

    sort(a.begin(), a.end());
    sort(freq.begin(), freq.begin() + n);

    int ans = 0;

    for(int i = 0; i < n; i++) {
        ans += a[i] * freq[i];
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;

    while(T--) {
        solve();
    }

    return 0;
}
