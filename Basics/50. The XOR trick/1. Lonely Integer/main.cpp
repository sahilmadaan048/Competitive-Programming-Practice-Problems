// https://vjudge.net/problem/HackerRank-ctci-lonely-integer

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int ans = 0 ;
	for(int i=0; i<n; i++) {
		int x; cin >> x;
		ans ^= x;
	}
	cout << ans << "\n";
	return 0;
}