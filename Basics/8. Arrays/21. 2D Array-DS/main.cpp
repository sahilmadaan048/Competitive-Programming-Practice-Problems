// https://vjudge.net/problem/HackerRank-2d-array#google_vignette

#include <iostream>
#include <vector>
#include <limits.h>  // For INT_MIN
using namespace std;

int hourglassSum(vector<vector<int>>& arr) {
    int maxSum = INT_MIN;  // Initialize to a very small value
    
    // Iterate over all possible top-left corners of the hourglasses
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 3; j++) {
            // Calculate the hourglass sum
            int currentSum = arr[i][j] + arr[i][j+1] + arr[i][j+2]  // Top row
                          + arr[i+1][j+1]                          // Middle
                          + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]; // Bottom row
            
            // Update the max sum if the current sum is greater
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }
    
    return maxSum;
}

int main() {
    vector<vector<int>> arr(6, vector<int>(6));
    
    // Input the 6x6 matrix
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }
    
    // Calculate and print the maximum hourglass sum
    cout << hourglassSum(arr) << endl;
    
    return 0;
}
