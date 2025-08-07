// https://www.spoj.com/problems/KOZE/
#include <bits/stdc++.h>
using namespace std;

#define ff(i,a,b) for(int i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int r, int c, vector<vector<char>>& temp, vector<vector<bool>>& visited, int &ct1, int &ct2){
    visited[r][c] = true;
    if(temp[r][c] == 'k') ct1++;
    else if(temp[r][c] == 'v') ct2++;

    int n = temp.size();
    int m = temp[0].size();
    
    for(int i = 0; i < 4; i++){
        int row = r + dx[i];
        int col = c + dy[i];
        if(row >= 0 && row < n && col >= 0 && col < m && temp[row][col] != '#' && !visited[row][col]){
            dfs(row, col, temp, visited, ct1, ct2);
        }
    }
}

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> temp(n, vector<char>(m));
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    int total_sheep = 0, total_wolves = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> temp[i][j];
            if(temp[i][j] == 'k') total_sheep++;
            else if(temp[i][j] == 'v') total_wolves++;
        }
    }

    int surviving_sheep = 0, surviving_wolves = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if((temp[i][j] == 'k' || temp[i][j] == 'v' || temp[i][j] == '.') && !visited[i][j]){
                int sheep_count = 0, wolf_count = 0;
                dfs(i, j, temp, visited, sheep_count, wolf_count);
                if(sheep_count > wolf_count) {
                    surviving_sheep += sheep_count;
                } else {
                    surviving_wolves += wolf_count;
                }
            }
        }
    }

    cout << surviving_sheep << " " << surviving_wolves << "\n";
}

int main(){
    fast;
    solve();
    return 0;
}
