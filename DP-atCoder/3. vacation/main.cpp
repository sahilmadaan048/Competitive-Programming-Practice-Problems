// https://atcoder.jp/contests/dp/tasks/dp_c


// #include<bits/stdc++.h>
// using namespace std;

// int f(int day, int last, vector<vector<int>>& points, vector<vector<int>>& dp){
// 	if(dp[day][last] != -1) return dp[day][last];
// 	if(day == 0){
// 		int maxi = 0 ;
// 		for(int i=0; i<=2; i++){
// 			if(i != last){
// 				maxi = max(maxi, points[0][i]);
// 			}
// 		}
// 		return dp[last][last] = maxi;
// 	}

// 	int maxi = 0 ;
// 	for(int i=0; i<=2; i++){
// 		if(i != last){
// 			int activity = points[day][i] + f(day-1, i, points, dp);
// 			maxi = max(maxi, activity);
// 		}
// 	}
// 	return dp[day][last] = maxi;
// }

// int solve(int n, vector<vector<int>> & temp){
// 	vector<vector<int>> dp(n, vector<int>(4, -1));
// 	return f(n-1, 3, temp, dp);
// }

// int main(){
// 	int n; cin >> n;
// 	vector<vector<int>> temp(n, vector<int>(3, 0));
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<3; j++){
// 			cin >> temp[i][j];
// 		}
// 	}

// 	cout << solve(n, temp);
// }

#include<bits/stdc++.h>
using namespace std;

int f(int day, int last, vector<vector<int>>& points, vector<vector<int>>& dp) {
    if (dp[day][last] != -1) return dp[day][last];
    
    if (day == 0) { // Base case: first day
        int maxi = 0;
        for (int i = 0; i <= 2; i++) { // Iterate over the activities
            if (i != last) {
                maxi = max(maxi, points[0][i]);
            }
        }
        return dp[day][last] = maxi;
    }

    int maxi = 0;
    for (int i = 0; i <= 2; i++) { // Iterate over the activities
        if (i != last) {
            int activity = points[day][i] + f(day - 1, i, points, dp);
            maxi = max(maxi, activity);
        }
    }
    return dp[day][last] = maxi;
}

int solve(int n, vector<vector<int>>& temp) {
    vector<vector<int>> dp(n, vector<int>(4, -1)); // Initialize dp with -1
    return f(n - 1, 3, temp, dp); // Start with day n-1 and no last activity
}

int main() {
    int n; cin >> n;
    vector<vector<int>> temp(n, vector<int>(3, 0)); // Input vector
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> temp[i][j];
        }
    }

    cout << solve(n, temp) << endl; // Print the result
    return 0;
}
