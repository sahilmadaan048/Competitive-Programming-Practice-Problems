// https://vjudge.net/problem/Gym-287310T#google_vignette


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> temp(n, vector<int>(n));
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> temp[i][j];

            // Summing up primary diagonal (i == j)
            if (i == j) {
                sum1 += temp[i][j];
            }

            // Summing up secondary diagonal (i + j == n - 1)
            if (i + j == n - 1) {
                sum2 += temp[i][j];
            }
        }
    }

    // Output the absolute difference between the sums of the diagonals
    cout << abs(sum1 - sum2) << endl;

    return 0;
}
