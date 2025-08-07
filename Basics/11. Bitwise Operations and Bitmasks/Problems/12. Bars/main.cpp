// https://vjudge.net/problem/UVA-12455

#include<bits/stdc++.h>
using namespace std;

void solve() {
	int len; cin>> len;
	int n ; cin >> n ;
	vector<int> temp(n);
	for(int i=0; i<n ; i++) {
		cin >> temp[i];
	}
	for(int mask = 0; mask<(1<<n); mask++) {
		int sum = 0 ;
		for(int i=0; i<n; i++) {
			if(mask&(1<<i)) {
				sum += temp[i];
			}
		}
		if(sum == len){
			cout << "YES" << '\n';
			return ;
		}
	}
	puts("NO");
	return;
}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}

	return 0 ;
}