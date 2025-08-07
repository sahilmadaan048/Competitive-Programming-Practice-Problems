// https://cses.fi/problemset/task/1680

// #include<bits/stdc++.h>
// using namespace std;

// void dfs(int src,int dest, vector<int>&vis, vector<int>&dist , vector<vector<int>>&graph, vector<int> &path, vector<int> &longestpath){
// 	vis[src]=1;
// 	path.push_back(src);
// 	if(src == dest){
// 		if(path.size()>longestpath.size()){
// 			longestpath = path;
// 		}
// 	}
// 	for(auto it: graph[src]){
// 		// if(!vis[it]){
// 			if(dist[src]+1 > dist[it]){
// 				dist[it] = dist[src]+1;
// 				dfs(it, dest, vis, dist, graph, path, longestpath);
// 			}
// 		// }
// 	}
// 	path.pop_back();
// }

// int main(){
// 	int n, m; cin >> n >> m ;
// 	vector<vector<int>> graph(n+1);
// 	for(int i=0; i<m; i++){
// 		int u, v; cin >> u >> v;
// 		graph[u].push_back(v);
// 	}
// 	vector<int> dist(n+1,-1);
// 	dist[1]=0;
// 	vector<int> path;
// 	vector<int> vis(n+1, 0);
// 	vector<int> longestpath;
// 	// for(int i=1; i<=n; i++){
// 	// 	if(!vis[i]){
// 	// 		dfs(i, vis, dist, graph, path);
// 	// 	}
// 	// }

// 	dfs(1, n, vis, dist, graph, path, longestpath);
// 	// vector<int> vec = *max_element(paths.begin(), paths.end());
// 	if(dist[n] == -1){
// 		cout << "IMPOSSIBLE";
// 		return 0 ;
// 	}
// 	else{
// 		cout << longestpath.size() <<  endl;
// 		for(int i=0; i<longestpath.size(); i++) cout << longestpath[i] << " ";
// 	}
	
// 	return 0 ;
// }


// #include<bits/stdc++.h>
// using namespace std;

// void dfs(int src, int dest, vector<int>& vis, vector<int>& dist, vector<vector<int>>& graph, vector<int>& path, vector<int>& longestPath) {
//     vis[src] = 1;
//     path.push_back(src);
    
//     if (src == dest) {
//         if (path.size() > longestPath.size()) {
//             longestPath = path;
//         }
//     }
    
//     for (auto it : graph[src]) {
//         if (dist[src] + 1 > dist[it]) {
//             dist[it] = dist[src] + 1;
//             dfs(it, dest, vis, dist, graph, path, longestPath);
//         }
//     }
    
//     path.pop_back();
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
    
//     vector<vector<int>> graph(n + 1);
//     for (int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//         graph[u].push_back(v);
//     }
    
//     vector<int> dist(n + 1, -1);
//     dist[1] = 0; // The source node's distance should be zero
    
//     vector<int> path;
//     vector<int> vis(n + 1, 0);
//     vector<int> longestPath;
    
//     dfs(1, n, vis, dist, graph, path, longestPath);
    
//     if (dist[n] == -1) {
//         cout << "IMPOSSIBLE" << endl;
//     } else {
//         cout << longestPath.size() << endl;
//         for (int node : longestPath) {
//             cout << node << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// void topoSort(int node, vector<vector<int>>& graph, vector<int>& vis, stack<int>& topoStack) {
//     vis[node] = 1;
//     for (auto adj : graph[node]) {
//         if (!vis[adj]) {
//             topoSort(adj, graph, vis, topoStack);
//         }
//     }
//     topoStack.push(node);
// }

// int main() {
//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> graph(n + 1);
//     for (int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//         graph[u].push_back(v);
//     }

//     // Topological Sort
//     vector<int> vis(n + 1, 0);
//     stack<int> topoStack;

//     for (int i = 1; i <= n; i++) {
//         if (!vis[i]) {
//             topoSort(i, graph, vis, topoStack);
//         }
//     }

//     // Distance and Parent tracking
//     vector<int> dist(n + 1, INT_MIN);  // Initialize with very small values
//     vector<int> parent(n + 1, -1);     // To store the path

//     dist[1] = 0;  // Distance to source is 0

//     // Process nodes in topological order
//     while (!topoStack.empty()) {
//         int node = topoStack.top();
//         topoStack.pop();

//         if (dist[node] != INT_MIN) {
//             for (auto adj : graph[node]) {
//                 if (dist[node] + 1 > dist[adj]) {
//                     dist[adj] = dist[node] + 1;
//                     parent[adj] = node;
//                 }
//             }
//         }
//     }

//     // If destination node is not reachable
//     if (dist[n] == INT_MIN) {
//         cout << "IMPOSSIBLE" << endl;
//         return 0;
//     }

//     // Recover the longest path from parent array
//     vector<int> path;
//     for (int cur = n; cur != -1; cur = parent[cur]) {
//         path.push_back(cur);
//     }
//     reverse(path.begin(), path.end());

//     // Output the longest path
//     cout << path.size() << endl;
//     for (int node : path) {
//         cout << node << " ";
//     }
//     cout << endl;

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

void topoSort(int node, vector<vector<int>>& graph, vector<int>& vis, stack<int>& topoStack) {
    vis[node] = 1;
    for (auto adj : graph[node]) {
        if (!vis[adj]) {
            topoSort(adj, graph, vis, topoStack);
        }
    }
    topoStack.push(node);
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }

    // Topological Sort
    vector<int> vis(n + 1, 0);
    stack<int> topoStack;

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            topoSort(i, graph, vis, topoStack);
        }
    }

    // Distance and Parent tracking
    vector<int> dist(n + 1, INT_MIN);  // Initialize with very small values
    vector<int> parent(n + 1, -1);     // To store the path

    dist[1] = 0;  // Distance to source is 0

    // Process nodes in topological order
    while (!topoStack.empty()) {
        int node = topoStack.top();
        topoStack.pop();

        if (dist[node] != INT_MIN) {
            for (auto adj : graph[node]) {
                if (dist[node] + 1 > dist[adj]) {
                    dist[adj] = dist[node] + 1;
                    parent[adj] = node;
                }
            }
        }
    }

    if (dist[n] == INT_MIN) {    // If destination node is not reachable

        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    // Recover the longest path from parent array
    vector<int> path;
    for (int cur = n; cur != -1; cur = parent[cur]) {
        path.push_back(cur);
    }
    reverse(path.begin(), path.end());

    // Output the longest path
    cout << path.size() << endl;
    for (int node : path) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
