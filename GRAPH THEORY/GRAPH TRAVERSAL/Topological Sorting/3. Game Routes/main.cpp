// https://cses.fi/problemset/task/1681

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int n, m;
vector<vector<int>> graph;
vector<int> vis;
vector<vector<int>> parent;
stack<int> st;
typedef long long ll;
// #define ll long long

void doit(int node, long long &count){
	vis[node]=1;
	if(parent[node][0] == -1){
		count++;
		return;
	}
	for(auto it : parent[node]){
		if(!vis[it]){
			doit(it, count);
		}else{
			count = (count+1) % MOD;
		}
	}
	// return;
}

void topsort(int src){
	vis[src]=1;
	for(auto it: graph[src]){
		if(!vis[it]){
			topsort(it);
		}
	}
	st.push(src);
}

int main(){
	cin >> n >> m ;
	graph.resize(n+1);
	for(int i=0; i<m; i++){
		int u, v; cin >> u >> v;
		graph[u].push_back(v);
	}

	vis.assign(n+1, 0);
	parent.resize(n+1);
	parent[1].push_back(-1);
	topsort(1);

	while(!st.empty()){
		int node = st.top();
		st.pop();

		for(auto it: graph[node]){
			parent[it].push_back(node);
		}
	}

	ll count = 0 ;
	vis.assign(n+1, 0);
	doit(n, count);
	cout << (count%MOD) << endl;

	return 0 ;
}


// #include<bits/stdc++.h>
// using namespace std;
// const int MOD = 1e9+7;  // Adjusted MOD value
// int n, m;
// vector<vector<int>> graph;
// vector<vector<int>> parent;
// vector<int> vis;
// stack<int> st;
// typedef long long ll;

// // DFS to count the number of ways to reach node 1
// void doit(int node, long long &count) {
//     vis[node] = 1;
//     if (parent[node][0] == -1) {  // Base case: reached the source node
//         count++;
//         return;
//     }
//     for (auto it : parent[node]) {
//         if (!vis[it]) {
//             doit(it, count);
//         } else {
//             count = (count + 1) % MOD;  // Add the number of ways via already visited node
//         }
//     }
// }

// void topsort(int src) {
//     vis[src] = 1;
//     for (auto it : graph[src]) {
//         if (!vis[it]) {
//             topsort(it);
//         }
//     }
//     st.push(src);  // Add to stack in topological order
// }

// int main() {
//     cin >> n >> m;
//     graph.resize(n + 1);
//     parent.resize(n + 1);
//     vis.assign(n + 1, 0);

//     // Reading the graph
//     for (int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//         graph[u].push_back(v);
//     }

//     // Topological sort starting from node 1
//     topsort(1);

//     // Initialize parent for node 1 (the starting point)
//     parent[1].push_back(-1);

//     // Pop nodes from the stack in topological order
//     while (!st.empty()) {
//         int node = st.top();
//         st.pop();

//         // For every outgoing edge from node to 'it', update parent of 'it'
//         for (auto it : graph[node]) {
//             parent[it].push_back(node);
//         }
//     }

//     // Perform DFS to count paths from node 'n' to node 1
//     ll count = 0;
//     vis.assign(n + 1, 0);  // Reset visitation array
//     doit(n, count);  // Start from the destination node 'n'

//     // Output the result modulo MOD
//     cout << (count % MOD) << endl;

//     return 0;
// }
