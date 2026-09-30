// https://leetcode.com/problems/increasing-triplet-subsequence/submissions/2158073399/

// Author - sahilmadaan048

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for(int n : nums) {
            if(n <= min1) {
                min1 = n; 
            } else if(n <= min2) {
                min2 = n; 
            } else {
                return true;  // Found a third number greater than both
            }
        }
        return false;  // No triplet found
    }
};