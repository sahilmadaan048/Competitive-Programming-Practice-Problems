#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long dfs(int u, int parent, vector<int> &a, vector<vector<pair<int, int>>> &adj, long long &maxExcitement) {
        long long maxPath1 = 0, maxPath2 = 0, totalExcitement = a[u];

        for (auto &neighbor : adj[u]) {
            int v = neighbor.first, len = neighbor.second;
            if (v == parent) continue;

            long long subExcitement = dfs(v, u, a, adj, maxExcitement) - len;
            if (subExcitement > maxPath1) {
                maxPath2 = maxPath1;
                maxPath1 = subExcitement;
            } else if (subExcitement > maxPath2) {
                maxPath2 = subExcitement;
            }
        }
        
        maxExcitement = max(maxExcitement, totalExcitement + maxPath1 + maxPath2);
        return totalExcitement + maxPath1 - (parent != -1 ? adj[parent][u].second : 0);
    }

    long long roundTrip(int n, vector<int> &a, vector<vector<int>> &g) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto &edge : g) {
            int u = edge[0], v = edge[1], len = edge[2];
            adj[u].emplace_back(v, len);
            adj[v].emplace_back(u, len);
        }

        long long maxExcitement = LLONG_MIN;
        dfs(0, -1, a, adj, maxExcitement);
        return maxExcitement;
    }
};

int main() {
    Solution solution;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int m = n - 1;
    vector<vector<int>> g(m, vector<int>(3));
    for (int i = 0; i < m; i++) {
        cin >> g[i][0] >> g[i][1] >> g[i][2];
        g[i][0]--; g[i][1]--;  // Assuming input is 1-indexed
    }
    cout << solution.roundTrip(n, a, g) << endl;
    return 0;
}
