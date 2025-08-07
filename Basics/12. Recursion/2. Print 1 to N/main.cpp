// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
	if(n==1){
		cout << n << endl;
		return;
	}
	solve(n-1);
	cout << n << endl;
}

int main() {
	int n; cin>> n ;
	solve(n);
}
