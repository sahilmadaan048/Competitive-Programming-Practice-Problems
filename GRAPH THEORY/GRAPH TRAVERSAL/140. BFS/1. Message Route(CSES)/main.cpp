// https://cses.fi/problemset/task/1667
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    // Initialize graph
    unordered_map<int, vector<int>> g;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    // Initialize BFS variables
    vector<int> par(n + 1, -1);  // Parent array to reconstruct the path
    vector<int> vis(n + 1, 0);   // Visited array
    queue<int> q;

    // Start BFS from node 1
    q.push(1);
    vis[1] = 1;
    par[1] = -1;  // Starting node has no parent

    // BFS to find shortest path
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        
        for (int adj : g[node]) {
            if (!vis[adj]) {
                vis[adj] = 1;
                par[adj] = node;
                q.push(adj);
                
                // Stop BFS early if we reach the target node
                if (adj == n) break;
            }
        }
    }

    // Check if there is a path to node n
    if (!vis[n]) {
        cout << "IMPOSSIBLE" << endl;  // No path found
        return 0;
    }

    // Reconstruct the path from node n to node 1
    vector<int> path;
    for (int v = n; v != -1; v = par[v]) {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());

    // Output the results
    cout << path.size() << endl;  // Length of the path
    for (int v : path) {
        cout << v << " ";  // Print the path
    }
    cout << endl;

    return 0;
}
