// https://atcoder.jp/contests/dp/tasks/dp_b


// using memoixation

// #include<bits/stdc++.h>
// using namespace std;

// int solve(int index, int k , vector<int>& dp, vector<int>& heights){
// 	if(index == 0) return 0;
// 	if(dp[index] != -1) return dp[index];
// 	int minSteps = INT_MAX;
// 	for(int j=1; j<=k ;j++){
// 		if(index-j >= 0){
// 			int jump = solve(index-j, k, dp, heights) + abs(heights[index]-heights[index-j]);
// 			minSteps = min(minSteps, jump);
// 		}
// 	}
// 	return dp[index] = minSteps;
// }

// int main(){
// 	int n, k;
// 	cin >> n >> k;
// 	vector<int> heights(n, 0);
// 	vector<int> dp(n, -1);
// 	for(int i=0; i<n; i++) cin >> heights[i];
// 	cout << solve(n-1, k, dp, heights)<< endl;
// }



//using tabulation
#include<bits/stdc++.h>
using namespace std;

// int solve(int index, int k , vector<int>& dp, vector<int>& heights){
// 	if(index == 0) return 0;
// 	if(dp[index] != -1) return dp[index];
// 	int minSteps = INT_MAX;
// 	for(int j=1; j<=k ;j++){
// 		if(index-j >= 0){
// 			int jump = solve(index-j, k, dp, heights) + abs(heights[index]-heights[index-j]);
// 			minSteps = min(minSteps, jump);
// 		}
// 	}
// 	return dp[index] = minSteps;
// }

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> heights(n, 0);
	vector<int> dp(n, -1);
	for(int i=0; i<n; i++) cin >> heights[i];
	dp[0] = 0 ;
	for(int i=1; i<n; i++){
		int minSteps = INT_MAX;
		for(int j=1; j<=k ; j++){
			if(i-j >= 0){
				int jump = dp[i-j] + abs(heights[i] - heights[i-j]);
				minSteps = min(minSteps, jump);
			}
		}
		dp[i] = minSteps;
	}

	cout << dp[n-1] << endl;
}