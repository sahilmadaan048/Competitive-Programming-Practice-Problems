// https://codeforces.com/contest/540/problem/C


// #include<bits/stdc++.h>
// using namespace std;
// int n, m;
// bool flag = false;
// int dx[] = {1,-1,0,0};
// int dy[] = {0,0,-1,1};

// bool ok(int r, int c){
// 	if(r<0 or c<0 or r>=n or c>=m) return false;
// 	return true;
// }

// void dfs(int r, int c, int r2, int c2, vector<vector<bool>> & vis, vector<vector<char>> & g, vector<vector<bool>>& cracked){
// 	vis[r][c] = true;
// 	// cracked[true];
// 	for(int i=0; i<4; i++){
// 		int row = r+dx[i];
// 		int col = c+dy[i];
// 		if(!ok(row, col)) continue;
// 		if(row == r2 and col == c2){
// 			if(cracked[r2][c2] == 1) flag = true;
// 		}
// 		if(cracked[row][col] == 1){
// 			continue;
// 		}
// 		dfs(row, col, r2, c2, vis, g, cracked);
// 	}
// 	return;
// }

// int main(){
// 	cin >> n >> m;
// 	vector<vector<char>> g(n,vector<char>(m));
// 	vector<vector<bool>> cracked(n, vector<bool>(m, false)), vis(n, vector<bool>(m, false));

// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<m; j++){
// 			cin>> g[i][j];
// 			if(g[i][j] == 'X') cracked[i][j]=true; //1 means they are cracked
// 		}
// 	}
// 	int r1, c1, r2, c2; cin>>r1>>c1>>r2>>c2;
// 	r1-- ;
// 	c1--;
// 	r2--;
// 	c2--;
// 	vis[r1][c1]=true;
// 	cracked[r1][c1] = true;
// 	dfs(r1, c1, r2, c2, vis, g, cracked);
// 	if(flag) cout << "YES\n";
// 	else cout << "NO\n";
// 	return 0;
// }

#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE 
#include <iostream> 
#include <cstdio> 
#include <cstdlib> 
#include <vector> 
#include <sstream> 
#include <string> 
#include <map> 
#include <set> 
#include <algorithm> 
#include <cmath> 
#include <cstring> 
#include <queue>
using namespace std; 
#pragma comment(linker, "/STACK:256000000") 
#define mp make_pair 
#define pb push_back 
#define all(C) (C).begin(), (C).end() 
#define sz(C) (int)(C).size() 
#define PRIME 1103 
#define PRIME1 31415 
typedef long long int64; 
typedef unsigned long long uint64; 
typedef pair<int, int> pii; 
typedef vector<int> vi; 
typedef vector<vector<int> > vvi; 
//------------------------------------------------------------ 
int ans = 0;
int n, m;
int mas[500][500];
int x1, ya;
int x2, y2;
int q = 0;
int ok(int x, int y)
{
    if (x < 0 || y < 0 || x >= n  || y >= m)
        return 0;
    return 1;
}

void dfs(int x, int y)
{
    mas[x][y] = 1;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    for(int i = 0; i < 4; ++i)
    {
        int tx = dx[i] + x, ty = y + dy[i];
        if (!ok(tx, ty))
            continue;
        if (tx == x2 && ty == y2)
        {
            if (mas[x2][y2])
                q = 1;
        }
        if (mas[tx][ty])
            continue;
        dfs(tx, ty);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
// #ifdef WIN32
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            char t;
            cin >> t;
            if (t == 'X')
                mas[i][j] = 1;
        }
    }
    
    cin >> x1 >> ya >> x2 >> y2;
    x1--, ya--, x2--, y2--;
    dfs(x1, ya);
    if (q)
        cout << "YES";
    else
        cout << "NO";
}