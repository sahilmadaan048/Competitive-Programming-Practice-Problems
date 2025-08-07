// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R

#include<bits/stdc++.h>
using namespace std;

void solve(int n,int start, int end , vector<int>& temp) {
	if(start>end) {
		cout << "YES" << endl;
		return;
	}
	if(temp[start] != temp[end]) {
		cout << "NO" << endl;
		return ;
	}
	solve(n, start+1, end-1, temp);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n ;
	vector<int> temp(n);
	for(int i=0; i<n; i++) cin>> temp[i];
	int index = 0;
	solve(n, 0, n-1, temp);
}