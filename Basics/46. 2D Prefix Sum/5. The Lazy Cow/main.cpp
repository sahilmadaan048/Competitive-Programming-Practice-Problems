// https://vjudge.net/problem/USACO-416

// Author - sahilmadaan048

#include <bits/stdc++.h>
using namespace std;

int grid[801][801];
bool isValid[801][801];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("lazy.in", "r", stdin);
    freopen("lazy.out", "w", stdout);

    int n, k;
    cin >> n >> k;

    memset(grid, 0, sizeof(grid));
    memset(isValid, false, sizeof(isValid));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i + j][n - i + j - 1];
            isValid[i + j][n - i + j - 1] = true;
        }
    }

    int ans = 0;

    for (int i = 0; i < 2 * n; i++) {
        int sum = 0;

        for (int a = max(i - k, 0); a <= min(i + k, 2 * n); a++) {
            for (int b = 0; b <= min(k, 2 * n); b++) {
                sum += grid[a][b];
            }
        }

        if (isValid[i][0]) {
            ans = max(ans, sum);
        }

        for (int j = 1; j + k < 2 * n; j++) {
            for (int a = max(i - k, 0); a <= min(i + k, 2 * n); a++) {
                if (j - k - 1 >= 0) {
                    sum -= grid[a][j - k - 1];
                }

                sum += grid[a][j + k];
            }

            if (isValid[i][j]) {
                ans = max(ans, sum);
            }
        }
    }

    cout << ans << '\n';

    return 0;
}