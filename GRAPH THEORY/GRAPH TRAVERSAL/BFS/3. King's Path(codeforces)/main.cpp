// /*
// https://codeforces.com/contest/242/problem/C
// */


// /*
// C. King's Path
// time limit per test2 seconds
// memory limit per test256 megabytes
// The black king is standing on a chess field consisting of 109 rows and 109 columns. We will consider the rows of the field numbered with integers from 1 to 109 from top to bottom. The columns are similarly numbered with integers from 1 to 109 from left to right. We will denote a cell of the field that is located in the i-th row and j-th column as (i, j).

// You know that some squares of the given chess field are allowed. All allowed cells of the chess field are given as n segments. Each segment is described by three integers ri, ai, bi (ai ≤ bi), denoting that cells in columns from number ai to number bi inclusive in the ri-th row are allowed.

// Your task is to find the minimum number of moves the king needs to get from square (x0, y0) to square (x1, y1), provided that he only moves along the allowed cells. In other words, the king can be located only on allowed cells on his way.

// Let us remind you that a chess king can move to any of the neighboring cells in one move. Two cells of a chess field are considered neighboring if they share at least one point.

// Input
// The first line contains four space-separated integers x0, y0, x1, y1 (1 ≤ x0, y0, x1, y1 ≤ 109), denoting the initial and the final positions of the king.

// The second line contains a single integer n (1 ≤ n ≤ 105), denoting the number of segments of allowed cells. Next n lines contain the descriptions of these segments. The i-th line contains three space-separated integers ri, ai, bi (1 ≤ ri, ai, bi ≤ 109, ai ≤ bi), denoting that cells in columns from number ai to number bi inclusive in the ri-th row are allowed. Note that the segments of the allowed cells can intersect and embed arbitrarily.

// It is guaranteed that the king's initial and final position are allowed cells. It is guaranteed that the king's initial and the final positions do not coincide. It is guaranteed that the total length of all given segments doesn't exceed 105.

// Output
// If there is no path between the initial and final position along allowed cells, print -1.

// Otherwise print a single integer — the minimum number of moves the king needs to get from the initial position to the final one.

// Examples
// InputCopy
// 5 7 6 11
// 3
// 5 3 8
// 6 7 11
// 5 2 5
// OutputCopy
// 4
// InputCopy
// 3 4 3 10
// 3
// 3 1 4
// 4 5 9
// 3 10 10
// OutputCopy
// 6
// InputCopy
// 1 1 2 10
// 2
// 1 1 3
// 2 6 10
// OutputCopy
// -1

// */

// #include<bits/stdc++.h>
// using namespace std;
// int sr, sc, er, ec;

// vector<pair<int, int>> movements = {
// 	{0,1}, {0,-1}, {1,0}, {-1,0}, {1,1,}, {1,-1}, {-1,1}, {-1,-1}
// };

// int main(){
// 	cin >> sr>> sc >> er >> ec;
// 	int n = max(sr, er);
// 	int m = max(sc, ec);
// 	vector<vector<int>> grid(n, vector<int>(m, -1));
// 	int num; cin>>num;
// 	for(int i=0; i<num; i++){
// 		int r, c1, c2; cin >> r>> c1 >>c2;
// 		for(int j=c1; j<=c2; j++){
// 			grid[r][j]=0;
// 		}
// 	}

// 	if(grid[sr][sc] == -1 || grid[er][ec] == -1){
// 		cout << -1 << endl;
// 		return 0;
// 	}

// 	vector<vector<int>> vis(n, vector<int>(m, 0));
// 	queue<pair<pair<int, int>, int>> q;
// 	q.push({{sr, sc}, 0});
// 	vis[sr][sc]=1;

// 	while(!q.empty()){
// 		int x = q.front().first.first;
// 		int y = q.front().first.second;
// 		int dist = q.front().second;
// 		q.pop();
// 		if(x== er and y == ec){
// 			cout << dist << endl;
// 			return 0 ;
// 		}

// 		for(auto movemenet: movements){
// 			int nx = x+movemenet.first;
// 			int ny = y+movemenet.second;

// 			if(nx>=0 and nx<n and ny>=0 and ny<m and !vis[nx][ny] and grid[nx][ny]==1){
// 				vis[nx][ny]=1;
// 				// grid[nx][ny]=dist;
// 				q.push({{nx, ny}, dist+1});
// 			}
// 		}

// 	}
// 	// if(!vis[er][ec]) cout << -1 << endl;
// 	// else {
// 		// cout << grid[er][ec] << endl;
// 	// }
// 	cout << -1 << endl;
// 	return 0 ;
// }	



#include<bits/stdc++.h>
using namespace std;

int sr, sc, er, ec;

vector<pair<int, int>> movements = {
    {0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}
};

int main() {
    cin >> sr >> sc >> er >> ec;
    int num;
    cin >> num;

    // Assuming maximum possible grid size, using a map of sets to store allowed cells
    map<int, set<int>> allowed_cells;

    for (int i = 0; i < num; ++i) {
        int r, c1, c2;
        cin >> r >> c1 >> c2;
        for (int j = c1; j <= c2; ++j) {
            allowed_cells[r].insert(j);
        }
    }

    // BFS setup
    queue<pair<pair<int, int>, int>> q;
    set<pair<int, int>> visited;

    if (!allowed_cells[sr].count(sc) || !allowed_cells[er].count(ec)) {
        cout << -1 << endl;
        return 0;
    }

    q.push({{sr, sc}, 0});
    visited.insert({sr, sc});

    while (!q.empty()) {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int dist = q.front().second;
        q.pop();

        // If the end position is reached
        if (x == er && y == ec) {
            cout << dist << endl;
            return 0;
        }

        // Explore all 8 possible movements
        for (auto movement : movements) {
            int nx = x + movement.first;
            int ny = y + movement.second;

            // Check if the next position is within allowed cells and not visited
            if (allowed_cells[nx].count(ny) && visited.find({nx, ny}) == visited.end()) {
                visited.insert({nx, ny});
                q.push({{nx, ny}, dist + 1});
            }
        }
    }

    // If no path is found
    cout << -1 << endl;
    return 0;
}
