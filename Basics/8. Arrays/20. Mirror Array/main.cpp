// https://vjudge.net/problem/Gym-287310W

// https://vjudge.net/problem/Gym-287310W

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> temp(n, vector<int>(m, 0));

    // Input the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> temp[i][j];
        }
    }

    // Reverse each row in the matrix
    for (int i = 0; i < n; i++) {
        reverse(temp[i].begin(), temp[i].end());
    }

    // Print the modified matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
