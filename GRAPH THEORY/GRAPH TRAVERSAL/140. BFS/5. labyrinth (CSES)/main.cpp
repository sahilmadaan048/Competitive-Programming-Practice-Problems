// #include<bits/stdc++.h>
// using namespace std;
// vector<pair<int, int>> movements = {
// 	{1,0}, {-1,0}, {0,1}, {0,-1}
// };

// char caldir(int dx, int dy){
// 	if(dx == 1 and dy == 0) return 'D';
// 	else if(dx == -1 and dy == 0) return 'U';
// 	else if(dx == 0 and dy == 1) return 'R';
// 	else if(dx == 0 and dy == -1) return 'L';
// }

// int main(){
// 	int n, m;
// 	cin >> n >> m;
// 	vector<vector<char>> temp(n, vector<char>(m));
// 	int row, col;
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<m; j++){
// 			cin >> temp[i][j];
// 			if(temp[i][j] == 'A'){
// 				row = i;
// 				col = j;
// 			}
// 		}
// 	}
// 	// unordered_map<pair<int, int>, char> mpp;
// 	// mpp[{1,0}] = 'D';
// 	// mpp[{-1,0}] = 'U';
// 	// mpp[{0,1}] = 'R';
// 	// mpp[{0,-1}] = 'L';

// 	vector<vector<int>> vis(n, vector<int>(m, 0));
// 	queue<pair<int, int>> q;
// 	q.push({row, col});
// 	string ans = "";
// 	vis[row][col]=1;

// 	bool flag = false;

// 	while(!q.empty()){
// 		int r = q.front().first;
// 		int c = q.front().second;
// 		q.pop();

// 		for(auto movement: movements){
// 			int nrow = r+ movement.first;
// 			int ncol = c+ movement.second;
// 			char dir = caldir(movement.first, movement.second);

// 			if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and !vis[nrow][ncol] and temp[nrow][ncol] != '#'){
// 				if(temp[nrow][ncol] == 'B'){
// 					vis[nrow][ncol]=1;
// 					ans += dir;
// 					flag= true;
// 					break;
// 				}
//                 if (temp[nrow][ncol] == '.') {
//                     vis[nrow][ncol] = 1;
//                     ans += dir;
//                     q.push({nrow, ncol});
//                 }

// 			} 
// 		}
// 		if(flag) break;
// 	}

// 	if(!flag){
// 		cout << "NO"<< endl;
// 	}
// 	else {
// 		cout <<"YES"<< endl;
// 		cout << ans.size() << endl;
// 		cout << ans << endl;
// 	}

// 	return  0;
// }



#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> movements = {
    {1, 0}, {-1, 0}, {0, 1}, {0, -1}
};

char caldir(int dx, int dy) {
    if (dx == 1 and dy == 0) return 'D';
    else if (dx == -1 and dy == 0) return 'U';
    else if (dx == 0 and dy == 1) return 'R';
    else if (dx == 0 and dy == -1) return 'L';
    // return '?';  // Default case to avoid issues
}

int main() {
    int n, m;
    cin >> n >> m;

    // Initialize the grid with n rows and m columns
    vector<vector<char>> temp(n, vector<char>(m));
    int row = -1, col = -1;

    // Read the grid and find the starting position 'A'
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> temp[i][j];
            if (temp[i][j] == 'A') {
                row = i;
                col = j;
            }
        }
    }

    // BFS
    vector<vector<int>> vis(n, vector<int>(m, 0));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));  // To track the path
    queue<pair<int, int>> q;
    q.push({row, col});
    vis[row][col] = 1;

    bool flag = false;
    int end_row = -1, end_col = -1;

    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();  // Pop after accessing front

        for (auto movement : movements) {
            int nrow = r + movement.first;
            int ncol = c + movement.second;
            char dir = caldir(movement.first, movement.second);

            if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and !vis[nrow][ncol]) {
                if (temp[nrow][ncol] == '.' || temp[nrow][ncol] == 'B') {
                    vis[nrow][ncol] = 1;
                    parent[nrow][ncol] = {r, c};
                    q.push({nrow, ncol});

                    if (temp[nrow][ncol] == 'B') {
                        flag = true;
                        end_row = nrow;
                        end_col = ncol;
                        break;
                    }
                }
            }
        }
        if (flag) break;  // Break outer loop if 'B' is found
    }

    if (!flag) {
        cout << "NO" << endl;
    } else {
        // Reconstruct the path
        string ans = "";
        pair<int, int> current = {end_row, end_col};
        while (current != make_pair(row, col)) {
            pair<int, int> prev = parent[current.first][current.second];
            int dx = current.first - prev.first;
            int dy = current.second - prev.second;
            ans += caldir(dx, dy);
            current = prev;
        }
        reverse(ans.begin(), ans.end());  // Reverse the path since we built it backwards

        cout << "YES" << endl;
        cout << ans.size() << endl;
        cout << ans << endl;
    }

    return 0;
}
