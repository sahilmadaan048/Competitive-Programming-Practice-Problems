// https://codeforces.com/contest/802/problem/J


// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<pair<int,int>>> graph;
// vector<int> vis;
// typedef long long ll;

// ll dfs(int node, int wt){
// 	ll total=wt;
// 	// if(vis[node])
// 	vis[node]=1;
// 	for(auto it: graph[node]){
// 		if(!vis[it.first]){
// 			total += dfs(it.first ,it.second);
// 		}
// 	}
// 	return total;
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	cin.tie(0);
// 	vis.resize(n+1);
// 	graph.resize(n+1);
// 	for(int i=1; i<n ;i++){
// 		int u, v, wt;
// 		cin >> u >> v >> wt;
// 		graph[u].push_back({v, wt});
// 		graph[v].push_back({u, wt});
// 	}

// 	//we have the adjacency list with us now for the graph
// 	vis[0]=1;
// 	int ans1 = dfs(graph[0][0].first, graph[0][0].second);
// 	fill(vis.begin(), vis.end(), 0);
// 	vis[0]=1;
// 	int ans2 = dfs(graph[0][1].first, graph[0][1].second);

// 	cout << max(ans1, ans2) << endl;
// 	return 0;
// }



#include<bits/stdc++.h>
using namespace std;

vector<vector<pair<int, int>>> tree;
int max_cost = 0;

// DFS to find the maximum root-to-leaf path
void dfs(int node, int parent, int current_sum) {
    bool is_leaf = true;
    
    // Traverse all children
    for (auto& edge : tree[node]) {
        int next_node = edge.first;
        int weight = edge.second;
        
        if (next_node != parent) {
            is_leaf = false;
            // Recursively call DFS for the child node
            dfs(next_node, node, current_sum + weight);
        }
    }
    
    // If it's a leaf node, update the maximum cost
    if (is_leaf) {
        max_cost = max(max_cost, current_sum);
    }
}

int main() {
    int n;
    cin >> n;

    tree.resize(n);

    // Input the tree edges
    for (int i = 1; i < n; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        tree[u].push_back({v, wt});
        tree[v].push_back({u, wt});
    }

    // Start DFS from the root node (assuming root is node 0)
    dfs(0, -1, 0);

    // Output the maximum cost from root to any leaf
    cout << max_cost << endl;

    return 0;
}
