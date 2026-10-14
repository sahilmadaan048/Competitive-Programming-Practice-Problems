// https://codeforces.com/contest/2113/problem/C

// Author - sahilmadaan048


#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test = 1;
    cin >> test;
    while (test--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> v[i][j];
        }
        int d = 0;
        vector<vector<int>> p(n + 1, vector<int>(m + 1, 0));
        for (int i = 1; i <= n; i++)
        {
            string s;
            cin >> s;
            for (int j = 1; j <= m; j++)
            {
                if (s[j - 1] == '1')
                {
                    d += v[i - 1][j - 1];
                    p[i][j] = p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1] + 1;
                }
                else
                {
                    d -= v[i - 1][j - 1];
                    p[i][j] = p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1] - 1;
                }
            }
        }
        if (d == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        d = abs(d);
        int g = 0;
        for (int i = k; i <= n; i++)
        {
            for (int j = k; j <= m; j++)
            {
                int val = abs(p[i][j] - p[i - k][j] - p[i][j - k] + p[i - k][j - k]);
                if (val == 0)
                    continue;
                if (g == 0)
                    g = val;
                else
                    g = __gcd(g, val);
            }
        }
        if (g != 0 && d % g == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}