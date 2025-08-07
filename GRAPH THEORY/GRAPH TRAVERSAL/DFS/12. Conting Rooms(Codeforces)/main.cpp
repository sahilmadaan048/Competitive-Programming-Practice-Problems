#include<bits/stdc++.h>
using namespace std;
 
int delrow[] = {-1, 0, 1,0};
int delcol[] = {0, 1, 0, -1};
 
void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& temp){
	vis[row][col] = 1;
 
	int n = temp.size();
	int m = temp[0].size();
 
	for(int i=0; i<4; i++){
		int nrow = row+delrow[i];
		int ncol = col+delcol[i];
 
		if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && temp[nrow][ncol] == '.'){
			dfs(nrow, ncol, vis, temp);
		}
	}
	return;
}
 
int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<char>> temp(n , vector<char>(m));
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m ;j++){
			cin >> temp[i][j];
		}
	}
 
	vector<vector<int>> vis(n, vector<int>(m, 0));
	int count = 0;
	for(int i=0 ;i<n; i++){
		for(int j=0; j<m ; j++){
			if(!vis[i][j] && temp[i][j] == '.'){
				dfs(i, j, vis, temp);
				count++;
			}
		}
	}
 
	cout << count << endl;
	return 0 ;
}