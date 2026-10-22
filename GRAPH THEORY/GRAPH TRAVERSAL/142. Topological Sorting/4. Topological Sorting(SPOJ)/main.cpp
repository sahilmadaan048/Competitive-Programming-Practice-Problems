// https://www.spoj.com/problems/TOPOSORT/

#include<bits/stdc++.h>
using namespace std;

void topsort(int node, vector<int>& vis, stack<int>& st, vector<vector<int>>& graph){
	vis[node]=1;
	for(auto it: graph[node]){
		if(!vis[it]){
			topsort(it, vis, st, graph);
		}
	}
	st.push(node);
}

int main(){
	int n, m;
	cin >> n  >> m ; 
	vector<vector<int>> graph(n+1);
	vector<int> vis(n+1, 0);
	stack<int> st;

	for(int i=0; i<m; i++){
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
	}

	for(int i=1; i<=n; i++){
		sort(graph[i].begin(), graph[i].end());
	}

	for(int i=1; i<=n; i++){
		if(!vis[i]){
			topsort(i, vis, st, graph);
		}
	}

	vector<int> temp;
	while(!st.empty()){
		int node = st.top();
		st.pop();
		temp.push_back(node);
	}

	if(temp.size() == n){
		for(int i=temp.size()-1; i>=0 ; --i){
			cout << temp[i] << " " ;
		}
	}
	else{
		cout << "Sandro fails." << '\n';
		return 0 ;
	}
	return 0 ;
}






// #include<bits/stdc++.h>
// using namespace std;

// bool hasCycle(int node, vector<int>& vis, vector<int>& recStack, stack<int>& st, vector<vector<int>>& graph) {
//     vis[node] = 1;
//     recStack[node] = 1; // Mark the node as part of the current recursion stack

//     for (auto it : graph[node]) {
//         if (!vis[it]) { 
//             if (hasCycle(it, vis, recStack, st, graph)) {
//                 return true; // Cycle detected in recursion
//             }
//         } else if (recStack[it]) {
//             return true; // Back edge found, indicating a cycle
//         }
//     }

//     recStack[node] = 0; // Backtracking step
//     st.push(node); // Topological sort, push to stack after visiting all neighbors
//     return false;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> graph(n + 1);
//     vector<int> vis(n + 1, 0), recStack(n + 1, 0); // RecStack for cycle detection
//     stack<int> st;

//     // Input graph edges
//     for (int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//         graph[u].push_back(v);
//     }

//     // Sort adjacency lists for lexicographically smallest order
//     for (int i = 1; i <= n; i++) {
//         sort(graph[i].begin(), graph[i].end());
//     }

//     // Perform DFS on each unvisited node
//     for (int i = 1; i <= n; i++) {
//         if (!vis[i]) {
//             if (hasCycle(i, vis, recStack, st, graph)) {
//                 cout << "Sandro fails." << '\n';
//                 return 0; // Cycle detected
//             }
//         }
//     }

//     // Output topological order
//     vector<int> result;
//     while (!st.empty()) {
//         result.push_back(st.top());
//         st.pop();
//     }

//     // Check if all nodes are included in the result
//     if (result.size() == n) {
//         for (int i : result) {
//             cout << i << " ";
//         }
//         cout << '\n';
//     } else {
//         cout << "Sandro fails." << '\n';
//     }

//     return 0;
// }
