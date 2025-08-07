// https://leetcode.com/problems/find-center-of-star-graph/submissions/1577518013/
// 
// class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        vector<int> degree(n + 1, 0); // Degree of nodes

        // Count degrees of each node
        for (auto &pair : edges) {
            degree[pair[0]]++;
            degree[pair[1]]++;
        }

        // The center will be the node with degree n-1
        for (int i = 1; i <= n; i++) {
            if (degree[i] == n - 1) {
                return i;
            }
        }
        
        return -1; // Just a safety check, should never reach here
    }
};