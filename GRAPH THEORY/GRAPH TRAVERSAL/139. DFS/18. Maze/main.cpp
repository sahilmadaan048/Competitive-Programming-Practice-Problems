// https://codeforces.com/contest/378/problem/C


#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> movements = {
    {0,1}, {0,-1}, {1,0}, {-1,0}
    // , {1,1}, {-1,-1}, {1,-1}, {-1,1}
};

bool isValid(int i, int j, int n, int m, vector<vector<int>>& vis, vector<vector<char>>& temp) {
    return i >= 0 && j >= 0 && i < n && j < m && vis[i][j] == 0 && temp[i][j] == '.';
}

void dfs(int row, int col, int& count, int k, vector<vector<int>>& vis, vector<vector<char>>& temp) {
    int n = temp.size();
    int m = temp[0].size();
    vis[row][col] = 1;
    temp[row][col] = 'X';
    count++;
    if (count == k) return;
    // count++;
    for (auto movement : movements) {
        int nrow = row + movement.first;
        int ncol = col + movement.second;

        if (isValid(nrow, ncol, n, m, vis, temp)) {
            dfs(nrow, ncol, count, k, vis, temp);
            if(count == k) return;
        }
    }
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<int>> vis(n, vector<int>(m, 0));
    
    int row, col;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    for(int i=0 ;i<n; i++){
    	for(int j=0; j<m; j++){
    		if(grid[i][j] == '.'){
    			row=i;
    			col=j;
    			break;
    		}
    	}
    }

    vector<vector<char>> temp = grid;
    int count = 0;
    dfs(0,1 , count, k, vis, temp);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << temp[i][j];
        }
        cout << endl;
    }
    
    return 0;
}

