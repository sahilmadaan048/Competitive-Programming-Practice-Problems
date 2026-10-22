#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<char>> temp;
vector<vector<int>> vis;

vector<pair<int, int>> movements = {
    {1, 0}, {-1, 0}, {0,1}, {0,-1},
    {-1,-1}, {1,1}, {1,-1}, {-1,1}
};

// Function to check if a move is valid
bool isvalid(int i, int j, int row, int col) {
    return (i >= 0 && j >= 0 && i < n && j < m && temp[i][j] == temp[row][col] + 1 && vis[i][j] == 0);
}

// DFS function to find the longest path starting from (i, j)
int dfs(int i, int j) {
    vis[i][j] = 1;
    int max_len = 1;
    for (auto movement : movements) {
        int nrow = i + movement.first;
        int ncol = j + movement.second;

        if (!isvalid(nrow, ncol, i, j)) continue;
        max_len = max(max_len, 1 + dfs(nrow, ncol));
    }
    return max_len;
}

int main() {
    int case_number = 1;

    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;

        // Resize and initialize the grid and visited array
        temp = vector<vector<char>>(n, vector<char>(m));
        vis = vector<vector<int>>(n, vector<int>(m, 0));

        // Read the grid input
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> temp[i][j];
            }
        }

        int longest_path = 0;

        // Find the longest path starting from each 'A'
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (temp[i][j] == 'A') {
                    vis = vector<vector<int>>(n, vector<int>(m, 0));  // Reset visited array for each 'A'
                    longest_path = max(dfs(i, j), longest_path);
                }
            }
        }

        cout << "Case " << case_number << ": " << longest_path << endl;
        case_number++;
    }

    return 0;
}
