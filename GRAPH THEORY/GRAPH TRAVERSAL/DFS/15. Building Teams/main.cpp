// https://cses.fi/problemset/task/1668

#include<bits/stdc++.h>
using namespace std;
int n, m;

vector<vector<int>> g;
vector<int> vis;
const int N=1e5+10;
vector<int> team(N, 1);

void dfs(int node, vector<int>& team){
	vis[node]=1;
	int tnum = team[node];
	for(auto it :g[node]){
		if(!vis[it]){
			team[it] = (tnum==1? 2:1);
			dfs(it, team);
		}
	}
	return ;
}

int main(){
	cin>>n>>m;
	g.resize(n+1);
	vis.resize(n+1, 0);
	for(int i=0; i<m; i++){
		int u, v;
		cin >> u>> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	// team.resize(n+1);
	// fill(team.begin(), team.end(), 1);
	for(int i=1; i<=n; i++){
		if(!vis[i]){
			dfs(i, team);
		}
	}
	bool flag = true;
	for(int i=1; i<=n; i++){
		for(auto it: g[i]){
			if(team[i] == team[it]){
				flag = false;
				break;
			}
		}
	}
	if(!flag) cout<< "IMPOSSIBLE" << endl;
	else{
			for(int i=1; i<=n; i++){
			cout << team[i] << " ";
		}
	}
	return 0;

}