// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e3+10;
// const int INF = 1e9;
// int vis[N][N];
// int val[N][N];
// int lev[N][N];
// int n, m;

// void reset(){
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<m; j++){
// 			lev[i][j]=INF;
// 			vis[i][j]=0;
// 		}
// 	}
// }


// vector<pair<int, int>> movements = {
// 	{0, 1}, {0,-1}, {-1, 0}, {1, 0}
// };

// bool isvalid(int i, int j){
// 	return i>=0 and j>=0 and i<n and j<m; 
// }

// void bfs(){
// 	queue<pair<int, int>> q;

// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<m; j++){
// 			if(val[i][j] == 1){
// 				q.push({i, j});
// 				lev[i][j]=0;
// 				vis[i][j]=1;
// 			}
// 		}
// 	}

// 	while(!q.empty()){
// 		pair<int, int> v = q.front();
// 		int v_x = v.first;
// 		int v_y = v.second;
// 		q.pop();

// 		for(auto movement : movements){
// 			int child_x = movement.first + v_x;
// 			int child_y = movement.second + v_y;

// 			if(!isvalid(child_x, child_y)) continue;
// 			if(vis[child_x][child_y]) continue;
// 			q.push(make_pair(child_x, child_y));
// 			// lev[child_x][child_y] = lev[v_x][v_y]+1;
// 			lev[child_x][child_y] = abs(child_x-v_x) + abs(child_y-v_y);
// 			vis[child_x][child_y]=1;
// 		}
// 	}
// }

// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		cin >> n >> m;
// 		reset();
// 		for(int i=0; i<n; i++){
// 			for(int j=0; j<m ;j++){
// 				cin >> val[i][j];
// 			}
// 		}

// 		// vector<vetcor<int>> ans;
// 		bfs();

// 		for(int i=0; i<n; i++){
// 			for(int j=0; j<m; j++){
// 				cout << lev[i][j] << " ";
// 			}
// 			cout << endl;
// 		}
// 	}
// 	return 0;

// }


// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e3 + 10;
// const int INF = 1e9;
// int vis[N][N];
// int val[N][N];
// int lev[N][N];
// int n, m;

// void reset() {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             lev[i][j] = INF;
//             vis[i][j] = 0;
//         }
//     }
// }

// vector<pair<int, int>> movements = {
//     {0, 1}, {0, -1}, {-1, 0}, {1, 0}
// };

// bool isvalid(int i, int j) {
//     return i >= 0 && j >= 0 && i < n && j < m;
// }

// void bfs() {
//     queue<pair<int, int>> q;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (val[i][j] == 1) {  // Start BFS from all cells where val[i][j] == 1
//                 q.push({i, j});
//                 lev[i][j] = 0;
//                 vis[i][j] = 1;
//             }
//         }
//     }

//     while (!q.empty()) {
//         pair<int, int> v = q.front();
//         int v_x = v.first;
//         int v_y = v.second;
//         q.pop();

//         for (auto movement : movements) {
//             int child_x = movement.first + v_x;
//             int child_y = movement.second + v_y;

//             if (!isvalid(child_x, child_y)) continue;
//             if (vis[child_x][child_y]) continue;  // Fixed typo in this line
//             if(lev[child_x][child_y] > lev[v_x][v_y] + 1){
//             	lev[child_x][child_y] = lev[v_x][v_y] + 1;
//             	q.push({child_x, child_y});
//             }
//                     }
//     }
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         cin >> n >> m;
//         reset();
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cin >> val[i][j];
//             }
//         }

//         bfs();

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cout << lev[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int N = 182;

int t, n, m;
int bitmap[N][N];
int dist[N][N];
vector<pair<int, int>> movements = {
    {0, 1}, {0, -1}, {1, 0}, {-1, 0}
};

bool isValid(int x, int y) {
    return x >= 0 && y >= 0 && x < n && y < m;
}

void bfs() {
    queue<pair<int, int>> q;
    
    // Initialize distances and push all white pixels into the queue
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (bitmap[i][j] == 1) {
                dist[i][j] = 0;
                q.push({i, j});
            } else {
                dist[i][j] = INF;
            }
        }
    }
    
    // Perform BFS to calculate minimum distances
    while (!q.empty()) {
        pair<int, int> p = q.front();
        int x = p.first;
        int y = p.second;
        q.pop();

        for (auto movement : movements) {
            int nx = x + movement.first;
            int ny = y + movement.second;

            if (isValid(nx, ny) && dist[nx][ny] > dist[x][y] + 1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> m;

        // Reading the bitmap
        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;
            for (int j = 0; j < m; j++) {
                bitmap[i][j] = row[j] - '0';
            }
        }

        // Run BFS to compute distances
        bfs();

        // Output the distances for each pixel
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << dist[i][j] << " ";
            }
            cout << endl;
        }

        // Print a blank line between test cases, except for the last one
        if (t > 0) cout << endl;
    }

    return 0;
}
