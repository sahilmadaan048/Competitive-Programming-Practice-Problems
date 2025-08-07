// https://codeforces.com/contest/862/problem/B

// #include<bits/stdc++.h>
// using namespace std;
// int n;
// // set<pair<int, int>> st;
// vector<vector<int>> graph;
// vector<int> vis;
// int ans = 0 ;

// void dfs(int node, int count){
// 	vis[node]=1;
// 	count++;
// 	for(auto it: graph[node]){
// 		if(!vis[it]){
// 			dfs(it, count);
// 		}
// 	}

// 	if(count > 2 && ((count&1) == 0)){
// 		// st.insert(make_pair(node, it));
// 		// st.insert(make_pair(it, node));
// 		ans++;
// 	}
// 	return;
// }

// int main(){
// 	cin>> n ;
// 	vis.resize(n+1, 0);
// 	graph.resize(n+1);	
// 	for(int i=0; i<n-1; i++){
// 		int u, v;
// 		cin >> u >> v;
// 		graph[u].push_back(v);
// 		graph[v].push_back(u);
// 	}
// 	for(int i=1; i<=n ;i++){
// 		// int count = 0 ;
// 		fill(vis.begin(), vis.end(), 0);
// 		dfs(i, 0);
// 	}
// 	// int ans = 0;
// 	// for(auto ele: st){
// 		// cout << ele.first << " " << ele.second << endl;
// 	// }
// 	cout << ans/2 << endl;
// }





#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> graph;
vector<int> vis;
int color[100001]; // color array to store the partition
long long cnt1 = 0, cnt2 = 0;

void dfs(int node, int col) {
    vis[node] = 1;
    color[node] = col;

    if (col == 1) cnt1++; // count nodes in the first set
    else cnt2++;          // count nodes in the second set

    for (auto it : graph[node]) {
        if (!vis[it]) {
            dfs(it, col ^ 1); // Alternate colors for neighbors
        }
    }
}

int main() {
    cin >> n;
    vis.resize(n + 1, 0);
    graph.resize(n + 1);

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // Start DFS from node 1 with color 1
    dfs(1, 1);

    // The number of edges between two sets is cnt1 * cnt2
    long long ans = cnt1 * cnt2 - (n - 1); // Subtract the number of edges already present
    cout << ans << endl;

    return 0;
}
