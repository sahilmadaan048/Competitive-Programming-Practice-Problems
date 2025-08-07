// https://codeforces.com/contest/813/problem/C

// #include<bits/stdc++.h>
// using namespace std;

// //ans will be 2* height of the maximum path containing that node
// int n, x;
// vector<vector<int>> g;
// vector<int> vis;
// vector<vector<int>> paths;

// void dfs(int node, vector<int>& path){
// 	vis[node]=1;
// 	path.push_back(node);
// 	bool flag = true;
// 	for(auto it: g[node]){
// 		if(!vis[it]){
// 			flag=false;
// 			dfs(it, path);
// 		}		
// 	}
// 	if(flag){
// 		paths.push_back(path);
// 	}
// 	vis[node]=0;
// 	path.pop_back();
// 	return;
// }
// int main(){
// 	cin>>n>>x;
// 	g.resize(n+1);
// 	// paths.resize(n+1);
// 	vis.resize(n+1, 0);
// 	if(x==1){
// 		cout << 0 << endl;
// 		return 0 ;
// 	}
// 	for(int i=0; i<n-1; i++){
// 		int u, v;
// 		cin >> u >> v;
// 		g[u].push_back(v);
// 		g[v].push_back(u);
// 	}
// 	vis[1]=1;
// 	vector<int>path;
// 	dfs(1, path);
//     vector<int> indexes;
//     for (int i = 0; i < paths.size(); i++) {
//         // Check if path contains node x
//         if (find(paths[i].begin(), paths[i].end(), x) != paths[i].end()) {
//             indexes.push_back(i);  // Store the index of the path containing x
//         }
//     }
// 	//now we have the indexes of all the paths in the paths matrix which contain the elenent x
// 	//we have to find the max size of the index and then multiply by 2 to get the ifnla ans
//     int max_path_length = 0;
//     for (int idx : indexes) {
//         max_path_length = max(max_path_length, (int)paths[idx].size());
//     }
// 	cout << 2*(max_path_length-1) << endl;
// 	return 0 ;
// }





#include <iostream>
#include <vector>
#include <cstring>
//
using namespace std;
 
const int LIM = 2e5 + 10;
 
vector<int> adj[LIM];
int alice[LIM], bob[LIM];
bool vis[LIM];
 
void dfs(int pos, int dpth, int *dat) {
    dat[pos] = dpth;
    // printf("%d: %d\n", pos, dat[pos]);
    for (int i = 0; i < adj[pos].size(); i++)
        if (!vis[adj[pos][i]]) {
            vis[adj[pos][i]] = true;
            dfs(adj[pos][i], dpth + 1, dat);
        }
}
 
inline int maxi(int a, int b) {return a > b ? a : b;}
 
int main(void) {
    int n, x, p, c;
    scanf("%d%d", &n, &x);
    for (int i = 1; i < n; i++) {
        scanf("%d%d", &p, &c);
        adj[p].push_back(c);
        adj[c].push_back(p);
    }
    // cout << "hree" << endl;
    memset(vis, false, sizeof vis);
    vis[1] = true;
    dfs(1, 0, alice);
    // printf("%d\n", alice[1]);
    memset(vis, false, sizeof vis);
    vis[x] = true;
    dfs(x, 0, bob);
    // for (int i = 1; i <= n; i++) {
    //     if (i - 1) putchar(' ');
    //     printf("%d", alice[i]);
    // }
    // putchar('\n');
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (bob[i] < alice[i]) ans = maxi(alice[i] * 2, ans);
    printf("%d\n", ans);
    return 0;
}