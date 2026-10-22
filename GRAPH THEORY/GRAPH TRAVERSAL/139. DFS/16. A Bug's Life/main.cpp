// https://www.spoj.com/problems/BUGLIFE/

#include<bits/stdc++.h>
using namespace std;
vector<int> vis;
vector<vector<int>> g;
int n, m;

bool isBipartite(int start, vector<int>& color){
	    // Code here
	    queue<int> q;
	    q.push(start);
	
	    color[start] = 0 ;
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        
	        for(auto it: g[node]){
	            
	            //if the adjacent node is not yet colored
	            //you will give the opposite color
	            if(color[it] == -1){
	                color[it] = !color[node];
	                q.push(it);
	            }
	            
	            //if the adjacent guy is having the same color
	            //someone did color it on some other path
	            else if(color[it] == color[node]) return false;
	        }
	    }
	  return true;
}

int main(){
	int t;
	cin >> t;
	for(int k=1; k<=t; k++){
		cin >> n >> m;
		vis.resize(n+1, 0);
		fill(vis.begin(), vis.end(), 0);
		g.clear();
		g.resize(n+1);
		for(int i=0; i<m ; i++){
			int u,v;
			cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		vector<int> color(n+1, -1);
		bool flag = true;
		for(int i=1; i<=n; i++){
			if(color[i]==-1 and !isBipartite(i, color)){
				flag = false;
				break;
			}
		}
		cout<<"Scenario #"<<k<<":"<< endl;
		if(!flag){
			cout << "Suspicious bugs found!" << endl; 
		}
		else cout << "No suspicious bugs found!"<< endl;
	}
	return 0 ;
}