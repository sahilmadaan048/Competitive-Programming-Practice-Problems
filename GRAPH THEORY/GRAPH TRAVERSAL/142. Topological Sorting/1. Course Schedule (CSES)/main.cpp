// https://cses.fi/problemset/task/1679

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m ;
	vector<vector<int>> graph(n+1);
	for(int i=0; i<m; i++){
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
	}
	vector<int> indegree(n+1, 0);
	for(int i=1; i<=n; i++){
		for(auto it: graph[i]){
			indegree[it]++;
		}
	}

	queue<int> q;
	for(int i=1; i<=n; i++){
		if(indegree[i] == 0) q.push(i);
	}
	vector<int> ans;
	while(!q.empty()){
		int node = q.front();
		q.pop();
		// count++:
		// cout << node << ' ';
		ans.push_back(node);

		for(auto it: graph[node]){
			indegree[it]--;
			if(indegree[it] == 0) q.push(it);
		}
	}
	if(ans.size() != n){
		cout << "IMPOSSIBLE" ;
		return  0 ; 
	}
	else {
		for(int i=0; i<ans.size(); i++){
			cout << ans[i] << " " ;
		}
	}

	return 0 ;
}