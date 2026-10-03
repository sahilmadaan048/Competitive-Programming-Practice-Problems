// https://codeforces.com/contest/1882/problem/B

// Author - sahilmadaan048

#include "bits/stdc++.h"
using namespace std;

using i64 = long long;

void solve() {
    int n;
    cin >> n;
    
    i64 Or = 0;
    vector<i64> a(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        
        while (k--) {
            int x;
            cin >> x;
            a[i] |= 1LL << x;
        }
        Or |= a[i];
    }
    
    for (int i = 1; i <= 50; i++) {
        if (Or >> i & 1) {
            i64 v = 0;
            for (int j = 0; j < n; j++) {
                if (~a[j] >> i & 1) {
                    v |= a[j];
                }
            }
            ans = max(ans, __builtin_popcountll(v));
        }
    }
    cout << ans << "\n";
}
int32_t main()
{

   int T; cin >> T;
   while (T--)
   {
    solve();
}
return 0;
}
