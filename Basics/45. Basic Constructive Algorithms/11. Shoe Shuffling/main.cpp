// https://codeforces.com/problemset/problem/1691/B/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

void solve()
{  
    ll n;
    cin >> n;
    vll s(n), p(n);
    for (ll i = 0; i < n; ++i)
        cin >> s[i];

    ll l = 0, r = 0;
    bool ans = true;
    for (ll i = 0; i < n; ++i)
        p[i] = i + 1;

    while (r < n)
    {
            while (r < n - 1 and s[r] == s[r + 1]) // get range [l,r] with equal values
                ++r;
            if (l == r)
                ans = false;
            else
                rotate(p.begin() + l, p.begin() + r, p.begin() + r + 1); // rotate right in range [l,r]
            l = r + 1;
            ++r;
        }
        if (ans)
        {
            for (auto &x : p)
                cout << x << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t; cin >> t;
        while (t--) {
            solve();
        }
        return 0;
    }   