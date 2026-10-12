#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<int>> turnAt(n, vector<int>(m));

        for (int turn = 1; turn <= n * m; turn++) {
            int x, y;
            cin >> x >> y;
            turnAt[x - 1][y - 1] = turn;
        }

        vector<vector<int>> prefA(n + 1, vector<int>(m + 1, 0));
        vector<vector<int>> prefB(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                int turn = turnAt[i - 1][j - 1];

                int alice = (turn % 2 == 1);
                int bob = (turn % 2 == 0);

                prefA[i][j] = alice + prefA[i - 1][j]
                                    + prefA[i][j - 1]
                                    - prefA[i - 1][j - 1];

                prefB[i][j] = bob + prefB[i - 1][j]
                                   + prefB[i][j - 1]
                                   - prefB[i - 1][j - 1];
            }
        }

        // Horizontal sliding-window maximums.
        vector<vector<int>> rowMax(n, vector<int>(m - k + 1));

        for (int i = 0; i < n; i++) {
            deque<int> dq;

            for (int j = 0; j < m; j++) {
                while (!dq.empty() && turnAt[i][dq.back()] <= turnAt[i][j]) {
                    dq.pop_back();
                }

                dq.push_back(j);

                while (!dq.empty() && dq.front() <= j - k) {
                    dq.pop_front();
                }

                if (j >= k - 1) {
                    rowMax[i][j - k + 1] = turnAt[i][dq.front()];
                }
            }
        }

        int earliest = n * m + 1;

        // Vertical sliding-window maximums.
        for (int j = 0; j <= m - k; j++) {
            deque<int> dq;

            for (int i = 0; i < n; i++) {
                while (!dq.empty() &&
                       rowMax[dq.back()][j] <= rowMax[i][j]) {
                    dq.pop_back();
                }

                dq.push_back(i);

                while (!dq.empty() && dq.front() <= i - k) {
                    dq.pop_front();
                }

                if (i >= k - 1) {
                    int maxTurn = rowMax[dq.front()][j];

                    int aliceSum = prefA[i + 1][j + k]
                                 - prefA[i - k + 1][j + k]
                                 - prefA[i + 1][j]
                                 + prefA[i - k + 1][j];

                    int bobSum = prefB[i + 1][j + k]
                               - prefB[i - k + 1][j + k]
                               - prefB[i + 1][j]
                               + prefB[i - k + 1][j];

                    if (aliceSum == k * k || bobSum == k * k) {
                        earliest = min(earliest, maxTurn);
                    }
                }
            }
        }

        if (earliest == n * m + 1) {
            cout << "Draw\n";
        } else if (earliest % 2 == 1) {
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }

    return 0;
}