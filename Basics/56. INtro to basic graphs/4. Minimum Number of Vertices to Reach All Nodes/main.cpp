// https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/description/
// 
// 
// class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        // Step 1: Initialize the incoming degree of each vertex
        vector<int> inDegree(n, 0);
        
        // Step 2: Compute the incoming degrees
        for (const auto& edge : edges) {
            inDegree[edge[1]]++;
        }
        
        // Step 3: Collect all vertices with in-degree of 0
        vector<int> result;
        for (int i = 0; i < n; ++i) {
            if (inDegree[i] == 0) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};