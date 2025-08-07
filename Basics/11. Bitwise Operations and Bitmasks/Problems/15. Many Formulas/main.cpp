// https://atcoder.jp/contests/abc045/tasks/arc061_a?lang=en


// https://vjudge.net/problem/AtCoder-arc061_a

 
#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >>s;
	int n = s.size();
	int sum = 1 << n-1;
	long long ans = 0 ;
	for(int i=0; i<sum; i++) {
		long long cur = 0;
		for(int j=0; j<n; j++) {
			cur = cur*10 + s[j]-'0';
			if(i & (1<<j)) {
				ans += cur;
				cur = 0;
			}
		}
		ans += cur;
	}
	cout << ans << endl;
	return 0;
}