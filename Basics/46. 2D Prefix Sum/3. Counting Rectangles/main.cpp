// https://codeforces.com/contest/1722/problem/E

// Author - sahilmadaan048


#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve()
{
    ll n, q;
    cin >> n >> q;

    ll m[1005][1005] = {};

    for (ll i = 0; i < n; i++)
    {
        ll h, w;
        cin >> h >> w;
        m[h][w] += h * w;
    }

    for (ll i = 1; i < 1005; i++)
    {
        for (ll j = 1; j < 1005; j++)
        {
            m[i][j] += m[i - 1][j] + m[i][j - 1] - m[i - 1][j - 1];
        }
    }

    while (q--)
    {
        ll hs, ws, hb, wb;
        cin >> hs >> ws >> hb >> wb;

        ll ans = m[hb - 1][wb - 1]
               - m[hs][wb - 1]
               - m[hb - 1][ws]
               + m[hs][ws];

        cout << ans << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
