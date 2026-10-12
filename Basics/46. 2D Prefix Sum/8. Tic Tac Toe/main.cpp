// https://www.codechef.com/LTIME97B/problems/TICTACTO?tab=statement

// Author - sahilmadaan048

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<int>> turnAt(n, vector<int>(m, 0));

        for (int turn = 1; turn <= n * m; turn++) {
            int x, y;
            cin >> x >> y;

            turnAt[x - 1][y - 1] = turn;
        }

        auto hasWinner = [&](int turns) {
            vector<vector<int>> prefA(n + 1, vector<int>(m + 1, 0));
            vector<vector<int>> prefB(n + 1, vector<int>(m + 1, 0));

            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                    int alice = 0, bob = 0;

                    if (turnAt[i - 1][j - 1] <= turns) {
                        if (turnAt[i - 1][j - 1] % 2 == 1) {
                            alice = 1;
                        } else {
                            bob = 1;
                        }
                    }

                    prefA[i][j] = alice + prefA[i - 1][j]
                                        + prefA[i][j - 1]
                                        - prefA[i - 1][j - 1];

                    prefB[i][j] = bob + prefB[i - 1][j]
                                       + prefB[i][j - 1]
                                       - prefB[i - 1][j - 1];
                }
            }

            for (int i = k; i <= n; i++) {
                for (int j = k; j <= m; j++) {
                    int aliceSum = prefA[i][j]
                                 - prefA[i - k][j]
                                 - prefA[i][j - k]
                                 + prefA[i - k][j - k];

                    int bobSum = prefB[i][j]
                               - prefB[i - k][j]
                               - prefB[i][j - k]
                               + prefB[i - k][j - k];

                    if (aliceSum == k * k || bobSum == k * k) {
                        return true;
                    }
                }
            }

            return false;
        };

        if (!hasWinner(n * m)) {
            cout << "Draw\n";
            continue;
        }

        int low = 1, high = n * m;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (hasWinner(mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        if (low % 2 == 1) {
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }

    return 0;
}