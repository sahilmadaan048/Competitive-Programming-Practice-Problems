// https://codeforces.com/contest/296/problem/C

// Author - sahilmadaan048


#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, k;
    cin >> n >> m >> k;

    vector <ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector <ll> l(m), r(m), d(m);
    for(ll i = 0; i < m; i++) {
        cin >> l[i] >> r[i] >> d[i];
    }

    vector <ll> opCnt(m + 1, 0);

    while(k--) {
        ll x, y;
        cin >> x >> y;

        opCnt[x - 1]++;
        opCnt[y]--;
    }

    for(ll i = 1; i <= m; i++) {
        opCnt[i] += opCnt[i - 1];
    }

    vector <ll> diffA(n + 1, 0);
    for(ll i = 0; i < m; i++) {
        d[i] *= opCnt[i];

        diffA[l[i] - 1] += d[i];
        diffA[r[i]] -= d[i];
    }

    for(ll i = 1; i <= n; i++) {
        diffA[i] += diffA[i - 1];
    }

    for(ll i = 0; i < n; i++) {
        a[i] += diffA[i];
    }

    for(auto &val : a) {
        cout << val << ' ';
    }

    cout << '\n';
}