// https://atcoder.jp/contests/dp/tasks/dp_a

// #include<bits/stdc++.h>
// using namespace std;


// int func(int index , vector<int>& dp, vector<int>& heights){
// 	if(index == 0) return 0;
// 	if(dp[index] != -1) return dp[index];
// 	int fs = func(index-1, dp, heights) + abs(heights[index] - heights[index-1]);
// 	int rs = INT_MAX;
// 	if(index > 1) rs = func(index-2, dp, heights) + abs(heights[index] - heights[index-2] );
// 	return dp[index] = min(fs, rs);
// }

// int main(){

// 	int n;
// 	cin >> n;
// 	vector<int> heights(n, 0);
// 	for(int i=0; i<n; i++) cin >> heights[i];
// 	vector<int> dp(n, -1);
// 	cout << func(n-1, dp, heights) << endl;
// }



//using tabulation
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin >> n;
// 	vector<int> heights(n, 0);
// 	for(int i=0; i<n; i++) cin >> heights[i];
// 	vector<int> dp(n, -1);
// 	dp[0] = 0 ;
// 	for(int i=1; i<n; i++){
// 		int fs = dp[i-1] + abs(heights[i]-heights[i-1]);
// 		int ss =INT_MAX;
// 		if(i>1) ss = dp[i-2] + abs(heights[i]-heights[i-2]);
// 		dp[i]=min(fs, ss);
// 	}
// 	cout << dp[n-1] << endl;
// }



//using space optiisation
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> heights(n, 0);
	for(int i=0; i<n; i++) cin >> heights[i];
	int prev = 0 ;
	int prev2 = 0 ;
	for(int i=1; i<n; i++){
		int fs = prev + abs(heights[i]-heights[i-1]);
		int ss =INT_MAX;
		if(i>1) ss = prev2 + abs(heights[i]-heights[i-2]);
		int curi = min(fs, ss);
		prev2 = prev;
		prev = curi;
	}
	cout << prev << endl;
}