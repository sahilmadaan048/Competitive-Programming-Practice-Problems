// // https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// ll countTasks(ll mid, ll x, ll y) {
//     return (mid / x) + (mid / y);  
// }

// void solve() {
//     ll n, x, y;
//     cin >> n >> x >> y;

//     if (x > y) swap(x, y);  
//     ll low = 0, high = n * y;
//     ll ans = high;            

//     while (low <= high) {
//         ll mid = low + (high - low) / 2;
//         if (countTasks(mid - x, x, y) >= n - 1) {
//             ans = mid;        
//             high = mid - 1;   
//         } else {
//             low = mid + 1;  
//         }
//     }
//     cout << ans << "\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t = 1; // Single test case
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int n, x, y;

bool good(long long int t) {
    long long int time = t - min(x, y);
    if(time < 0) return false;
    return (floor(time/x) + floor(time/y)) >= n-1;
}

int main() {
    cin >> n >> x >> y;
    long long int l = 0, r = 2*1e9;
    while(l + 1 < r) {
        long long int mid = (l + r)/2;
        if(good(mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << r << "\n";
}