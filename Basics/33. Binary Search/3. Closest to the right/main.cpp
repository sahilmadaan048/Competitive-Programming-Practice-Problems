// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ,k ; cin >> n >> k ;
	vector<int> temp(n); for(int i=0; i<n; i++) cin >> temp[i];
	while(k--){
		int num; cin >> num;
		int lo=0, hi=n-1;
		int ans = -1;
		while(lo<=hi){
			int mid = lo+(hi-lo)/2;
			if(temp[mid] >= num){
				ans = mid;
				hi = mid-1;
			}
			else{
				lo = mid+1;
			}
		}
		if(ans == -1) cout << n+1 << endl;
		else cout << ans+1 << endl;
	}
	return 0 ;
}