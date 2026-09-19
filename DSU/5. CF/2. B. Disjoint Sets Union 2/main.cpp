#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, n) for (int i = (a); i <= (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define sz(v) (int)(v.size())
#define srt(v) sort(v.begin(), v.end())         // sort
#define mxe(v) *max_element(v.begin(), v.end()) // find max element in vector
#define mne(v) *min_element(v.begin(), v.end()) // find min element in vector
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed
#define bin(x, y) bitset<y>(x)
using namespace std;
int MOD = 1e9 + 7; // Hardcoded, directly change from here for functions!

void modadd(int &a, int b) { a = ((a % MOD) + (b % MOD)) % MOD; }
void modsub(int &a, int b) { a = ((a % MOD) - (b % MOD) + MOD) % MOD; }
void modmul(int &a, int b) { a = ((a % MOD) * (b % MOD)) % MOD; }
// ================================== take ip/op like vector,pairs directly!==================================
template <typename typC, typename typD>
istream &operator>>(istream &cin, pair<typC, typD> &a) { return cin >> a.first >> a.second; }
template <typename typC>
istream &operator>>(istream &cin, vector<typC> &a)
{
    for (auto &x : a)
        cin >> x;
    return cin;
}
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const pair<typC, typD> &a) { return cout << a.first << ' ' << a.second; }
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a)
{
    for (auto &x : a)
        cout << x << '\n';
    return cout;
}
template <typename typC>
ostream &operator<<(ostream &cout, const vector<typC> &a)
{
    int n = a.size();
    if (!n)
        return cout;
    cout << a[0];
    for (int i = 1; i < n; i++)
        cout << ' ' << a[i];
    return cout;
}
// ===================================END Of the input module ==========================================

struct DSU
{
    vector<int> parent, size, mn, mx;

    DSU(int n)
    {
        parent.resize(n + 1);
        mn.resize(n+1);
        mx.resize(n+1);
        size.assign(n + 1, 1);
        for (int i = 1; i <= n; i++)
{            parent[i] = i;
            mn[i] = mx[i] = i;}
    }

    int find_set(int a)
    {
        if (parent[a] == a)
            return a;
        return parent[a] = find_set(parent[a]);
    }

    void union_sets(int a, int b)
    {
        a = find_set(a);
        b = find_set(b);

        if (a != b)
        {
            if (size[a] < size[b])
                swap(a, b);
            parent[b] = a;
            size[a] += size[b];
            mn[a] = min(mn[a], mn[b]);
            mx[a] = max(mx[a], mx[b]);
        }
    }

    bool same_set(int a, int b)
    {
        return find_set(a) == find_set(b);
    }

    tuple<int,int,int> get_info(int v) {
        int r = find_set(v);
        return {mn[r], mx[r], size[r]};
    }
};

void solve()
{
    int n, m;
    cin >> n >> m;

    DSU dsu(n);
    string s;
    for (int i = 0; i < m; i++)
    {
        cin >> s;
        if (s[0] == 'u')
        {
            int u, v;
            cin >> u >> v;
            dsu.union_sets(u, v);
        }
        else
        {
            // cout << (dsu.same_set(u, v) ? "YES\n" : "NO\n") << endl;
            int v; cin >> v;
            auto [mn, mx, sz] = dsu.get_info(v);
            cout << mn << " " << mx << " " << sz << "\n";
        }
    }
    return;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
