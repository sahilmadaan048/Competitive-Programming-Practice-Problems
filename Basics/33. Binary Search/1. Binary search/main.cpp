// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k; cin >> n >> k;
	vector<int> temp(n);
	for(int i=0; i<n; i++) cin >> temp[i];
	while(k--){
		int num; cin >> num;
		int lo = 0, hi=n-1;
		bool flag = false;
		while(lo<=hi){
			int mid = lo+(hi-lo)/2;
			if(temp[mid] == num){
				flag= true;
				break;
			}
			else if(temp[mid]<num) lo = mid+1;
			else hi = mid-1;
		}

		if(!flag) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0 ;
}