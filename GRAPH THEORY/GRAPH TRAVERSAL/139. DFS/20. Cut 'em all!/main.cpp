// // https://codeforces.com/contest/982/problem/C

// #include <bits/stdc++.h>
// using namespace std;

// void dfs(int node, vector<int>& vis, vector<vector<int>>& g, int& cnt) {
//     vis[node] = 1;
//     cnt++;  
//     for (auto neighbor : g[node]) {
//         if (!vis[neighbor]) {
//             dfs(neighbor, vis, g, cnt);
//         }
//     }
// }

// void solve() {
//     int n;
//     cin >> n;

//     if (n % 2 == 1) {  
//         cout << "-1\n";
//         return;
//     }

//     vector<vector<int>> g(n + 1);
//     for (int i = 0; i < n - 1; i++) {  
//         int u, v;
//         cin >> u >> v;
//         g[u].push_back(v);
//         g[v].push_back(u);
//     }

//     vector<int> vis(n + 1, 0);
//     int ans = 0;

//     for (int i = 1; i <= n; i++) {
//         if (!vis[i]) {
//             int cnt = 0;  
//             dfs(i, vis, g, cnt);

//             if (cnt % 2 == 0) {
//                 ans++;
//             }
//         }
//     }
//     cout << ans - 1 << "\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b, c)            cout << a << " " << b << " " << c << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
const int inf = 1e9;
const int N = 2e5+5;
const ll mod = 1e9+7;

/*************User defined function*************/
int ans = 0;
vector<int> g[N];

int dfs(int u, int p) {
    int sum = 1;
    for(auto v: g[u]) {
        if(v == p) continue;
        int cnt = dfs(v, u);
        sum += cnt;
        if(cnt%2 == 0) ans++;
    }
    return sum;
}

void solve() {
    int n;
    cin >> n;

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    if(n&1) {
        print(-1);
        return;
    }

    dfs(1, 0);

    print(ans);
} 

/*************main function*************/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 

    cout << fixed << showpoint;
    cout << setprecision(16);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    