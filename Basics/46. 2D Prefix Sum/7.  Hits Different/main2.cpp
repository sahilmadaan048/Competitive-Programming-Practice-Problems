#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    vector<int> queries(T);
    int maxN = 0;

    for (int i = 0; i < T; i++) {
        cin >> queries[i];
        maxN = max(maxN, queries[i]);
    }

    int maxDim = 1;
    while (maxDim * (maxDim + 1) / 2 < maxN) {
        maxDim++;
    }

    vector<vector<ll>> mat(maxDim, vector<ll>(maxDim, 0));
    vector<vector<ll>> prefSq(maxDim + 1, vector<ll>(maxDim + 1, 0));

    int start = 1;

    for (int len = 0; len < maxDim; len++) {
        for (int i = 0; i <= len; i++) {
            mat[len - i][i] = start++;
        }
    }

    for (int i = 0; i < maxDim; i++) {
        for (int j = 0; j < maxDim; j++) {
            ll num = mat[i][j];

            prefSq[i + 1][j + 1] = num * num
                                  + prefSq[i][j + 1]
                                  + prefSq[i + 1][j]
                                  - prefSq[i][j];
        }
    }

    for (int n : queries) {
        int dim = 1;

        while (dim * (dim + 1) / 2 < n) {
            dim++;
        }

        int upper = dim * (dim + 1) / 2;
        int diff = upper - n;

        int c = dim - diff;
        int r = dim + 1 - c;

        cout << prefSq[r][c] << '\n';
    }

    return 0;
}