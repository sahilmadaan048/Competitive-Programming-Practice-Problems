// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> nums(n) ; for(int i=0; i<n; i++) cin >> nums[i];
	sort(nums.begin(), nums.end());
	int k; cin>>k;
	while(k--){
		int l, r; cin >> l >> r;
		//apply binary search for l and r in the sprted nunns ans find the corresponding indice
		int lo=0, hi=n-1; 
		int ans = n;
		while(lo<=hi){
			int mid = lo+(hi-lo)/2;
			if(nums[mid]>=l){
				ans = mid;
				hi = mid-1;
			}
			else lo = mid+1;
		}

		lo=0, hi=n-1;
		int ans2=-1;
		while(lo<=hi){
			int mid = lo+(hi-lo)/2;
			if(nums[mid] <= r){
				ans2=  mid;
				lo = mid+1;
			}
			else hi = mid-1;
		}
        // Calculating the count of numbers between l and r
        int result = (ans2 - ans + 1);
        if(ans > ans2) result = 0;  // If no valid range exists, return 0

        cout << result << " ";
    }
    cout << endl;  // Print a newline after all queries
    return 0;
}