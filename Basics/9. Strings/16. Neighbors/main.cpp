// https://vjudge.net/problem/Gym-287310X


#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<char>> grid(N, vector<char>(M));

    // Read the grid
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> grid[i][j];
        }
    }

    int X, Y;
    cin >> X >> Y;

    // Convert 1-based index to 0-based index
    X -= 1;
    Y -= 1;

    // Directions for 8 neighbors (row_offset, col_offset)
    vector<pair<int, int>> directions = {
        {-1, -1}, {-1, 0}, {-1, 1}, // Top-left, Top, Top-right
        {0, -1},          {0, 1},    // Left, Right
        {1, -1}, {1, 0}, {1, 1}     // Bottom-left, Bottom, Bottom-right
    };

    bool all_neighbors_x = true;

    for (const auto& dir : directions) {
        int newX = X + dir.first;
        int newY = Y + dir.second;

        // Check if the new position is within bounds
        if (newX >= 0 && newX < N && newY >= 0 && newY < M) {
            if (grid[newX][newY] != 'x') {
                all_neighbors_x = false;
                break;
            }
        }
    }

    if (all_neighbors_x) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
