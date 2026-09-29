// https://vjudge.net/problem/CodeForces-873D

// https://codeforces.com/problemset/problem/873/D

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
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define bin(x,y) bitset<y>(x)

using namespace std;

void build(vector<int>& a, int l, int r, int k, int lo, int hi) {
    if(l >= r) return;

    // Only one call needed:
    // keep this segment sorted.
    if(k == 1) {
        for(int i = l; i < r; i++) {
            a[i] = lo + (i - l);
        }
        return;
    }

    int mid = (l + r) / 2;

    int leftLen = mid - l;
    int rightLen = r - mid;

    int maxLeft = 2 * leftLen - 1;
    int maxRight = 2 * rightLen - 1;

    // Current segment itself contributes 1 call.
    int rem = k - 1;

    /*
        We need:

        leftCalls + rightCalls = rem

        Both must be odd.

        Give as many calls as possible to the left,
        while leaving at least 1 call for the right.
    */

    int leftCalls = min(maxLeft, rem - 1);

    // leftCalls must be odd
    if(leftCalls % 2 == 0)
        leftCalls--;

    int rightCalls = rem - leftCalls;

    /*
        Give LEFT the larger values and RIGHT the smaller values.

        Therefore the whole [l,r) segment is definitely NOT sorted,
        so the current mergesort call actually splits.

        Example:

        left  -> [4,5]
        right -> [1,2]

        Whole segment is unsorted.
    */

    build(a, l, mid, leftCalls,
          lo + rightLen, hi);

    build(a, mid, r, rightCalls,
          lo, lo + rightLen);

    /*
        The children use disjoint value ranges:

        left  : [lo + rightLen, hi)
        right : [lo, lo + rightLen)

        Hence parent is guaranteed unsorted.
    */
}

void solve() {
    int n, k;
    cin >> n >> k;

    // Number of calls must be odd.
    if(k % 2 == 0) {
        cout << -1 << '\n';
        return;
    }

    // Maximum number of calls for n elements.
    if(k > 2 * n - 1) {
        cout << -1 << '\n';
        return;
    }

    vector<int> a(n);

    build(a, 0, n, k, 1, n + 1);

    for(int x : a)
        cout << x << ' ';

    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}