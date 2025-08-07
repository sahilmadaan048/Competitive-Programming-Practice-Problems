// // https://codeforces.com/contest/1851/problem/A

// #include <bits/stdc++.h>

// using namespace std;

// #define forn(i, n) for (int i = 0; i < int(n); i++)
// #define sz(v) (int)v.size()
// #define all(v) v.begin(),v.end()
// #define eb emplace_back



// void solve() {
//     int n,m,k,H; cin >> n >> m >> k >> H;
//     int ans = 0;
//     forn(i, n) {
//         int x; cin >> x;
//         ans += (H != x) && abs(H - x) % k == 0 && abs(H-x) <= (m-1) * k;
//     }
//     cout << ans << endl;
// }

// int main() {
//     int t;
//     cin >> t;

//     forn(tt, t) {
//         solve();
//     }
// }

// https://codeforces.com/problemset/problem/1851/B

#include<bits/stdc++.h>
using namespace std;

bool solve(){
    int n;
    cin >> n;
    vector<int>a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    for(int i = 0; i < n; i++){
        if((a[i] % 2) != (b[i] % 2)) return false;
    }
    return true;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        cout << (solve() ? "YES" : "NO") << "\n";
    }
    return 0;
}