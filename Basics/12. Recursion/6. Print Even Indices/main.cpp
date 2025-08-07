// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

#include<bits/stdc++.h>
using namespace std;

void solve(int i, vector<int>& temp) {
	if(i >= temp.size()) return;
	solve(i+2, temp);
	if((i&1) == 0 ){
		cout << temp[i] << " ";
	}
	// i += 2;
}

int main() {
	int n; cin >> n ;
	vector<int> temp(n);
	for(int i=0; i<n; i++) cin >> temp[i];
	int index= 0;
	solve(index, temp);
	return 0;	
}