// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A






#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

ll w, h, n;

bool isSideGood(ll x)
{
    return (x / w) * (x / h) >= n;
}
void solve()
{
    cin >> w >> h >> n;

    ll low = 0, high = 1;

    while (!isSideGood(high))
        high *= 2;

    ll minSide = 0;
    while (high > low + 1)
    {
        ll mid = (low + high) >> 1;

        if (isSideGood(mid))
        {
            high = mid;
        }
        else 
            low = mid;
    }

    cout << high << nline;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    while (T--)
    {
        solve();
    }
}


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

// int main() {
//     fast;
    
//     ll w, h, n;
//     cin >> w >> h >> n;
    
//     // Binary search initialization
//     ll lo = 1; 
//     ll hi = 1e18; // An arbitrarily large number for the upper bound
//     ll ans = hi;
    
//     while (lo <= hi) {
//         ll mid = lo + (hi - lo) / 2;
        
//         // Number of rectangles that can fit along the width and height
//         ll count_w = mid / w;
//         ll count_h = mid / h;
        
//         // Check if `n` rectangles can fit in the square of size `mid x mid`
//         if (count_w * 1LL* count_h >= n) {
//             ans = mid; // Update the answer
//             hi = mid - 1; // Try for a smaller size
//         } else {    
//             lo = mid + 1; // Try for a larger size
//         }
//     }
    
//     cout << ans << "\n";
//     return 0;
// }
