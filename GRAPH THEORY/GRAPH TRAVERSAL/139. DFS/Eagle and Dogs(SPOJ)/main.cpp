// https://www.spoj.com/problems/EAGLE1/


//the code it correct just that it gives tle on spoj\


//do it after done with dp


#include<bits/stdc++.h>
using namespace std;

int dfs(int i, vector<int>&vis, vector<vector<pair<int,int>>>& graph, int count){
	vis[i]=1;
	int maxcount = count;
	// if(dp[i] != -1) return dp[i];
	for(auto child: graph[i]){
		int v = child.first;
		int wt = child.second;
		if(!vis[v]){
			maxcount = max(maxcount, dfs(v, vis, graph, count+wt));
		}
	}
	return  maxcount ;
}

void reset(vector<int>& vis){
	for(int i=0; i<vis.size(); i++){
		vis[i] = 0 ;
	}
	return;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> vis(n+1, 0);
		// vector<int> dp(n+1, -1);
		vector<vector<pair<int , int>>> graph(n+1);
		for(int i=0; i<n-1; i++){
			int u,v,wt;
			cin >> u  >> v >> wt;
			graph[u].emplace_back(v, wt);
			graph[v].emplace_back(u, wt);
		}

		for(int i=1; i<=n; i++){
			reset(vis);
			int count = 0 ;
			
			cout << dfs(i, vis, graph, count) << " ";
		}
		cout << endl;
	}
	return 0;
}
