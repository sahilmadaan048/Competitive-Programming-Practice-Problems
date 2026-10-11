// https://leetcode.com/problems/matrix-block-sum/submissions/2169309857/

class Solution {
public:
        vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size();  
        vector<vector<int>> ans(n, vector<int> (m, 0)), pref(n+1, vector<int> (m+1));

        for(int i=0; i < n; i++) {
            for(int j=0; j< m; j++) {
                pref[i + 1][j + 1] = mat[i][j]
                                   + pref[i][j + 1]
                                   + pref[i + 1][j]
                                   - pref[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int r1 = max(0, i - k);
                int c1 = max(0, j - k);
                int r2 = min(n - 1, i + k);
                int c2 = min(m - 1, j + k);

                ans[i][j] = pref[r2 + 1][c2 + 1]
                          - pref[r1][c2 + 1]
                          - pref[r2 + 1][c1]
                          + pref[r1][c1];
            }
        }

        return ans;
    }
};