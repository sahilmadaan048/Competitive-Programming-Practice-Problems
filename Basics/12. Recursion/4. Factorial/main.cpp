// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J

#include<bits/stdc++.h>
using namespace std;

long long solve(int n) {
	if(n == 1) return 1;
	// int ans = solve()
	// cout <<  << endl;
	return n*solve(n-1);
}

int main() {
	int n; cin>>n ;
	long long ans  = solve(n);
	cout << ans << endl;
}