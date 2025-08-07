// https://codeforces.com/contest/29/problem/C

#include<bits/stdc++.h>
using namespace std;
// int n;
// const int N = 1e5+10;
// vector<vector<int>> graph;
// vector<int> vis;

// void dfs(int node, vector<int>& path){
// 	vis[node]=1;
// 	path.push_back(node);
// 	for(auto it: graph[node]){
// 		if(!vis[it]){
// 			dfs(it, path);
// 		}
// 	}
// 	return;
// }

// int main(){
// 	cin >> n;
// 	graph.resize(N);
// 	vis.assign(N,0);
// 	for(int i=0; i<n; i++){
// 		int u, v;
// 		cin >> u >> v;
// 		graph[u].push_back(v);
// 		graph[v].push_back(u);
// 	}
// 	vector<int> path;
// 	dfs(1, path);

// 	for(int i=path.size()-1; i>=0 ; i--){
// 		cout << path[i] << " ";
// 	}
// 	return 0;
// }



unordered_map<long long,vector<long long>> m;
unordered_map<int,bool> visited;
void dfs(int src,int n)
{
    visited[src]=true;
    cout<<src<<" ";
    for(auto c : m[src])
    {
        if(!visited[c])
        {
            dfs(c,n);
        }
    }
}

int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long  x,y;
        cin>>x>>y;
        m[x].push_back(y);
        m[y].push_back(x);
    }
    int src = -1;
    for(auto x : m)
    {
        if(m[x.first].size() == 1)
        {
            src = x.first;
            break;
        }
    }
    dfs(src,n);
}