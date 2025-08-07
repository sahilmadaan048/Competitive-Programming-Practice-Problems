// https://vjudge.net/problem/HackerRank-maximizing-xor

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b; cin >> a>> b;
	int ans = 0 ;
	for(int i=a; i<=b; i++){
		for(int j=a; j<=b; j++){
			ans = max(ans, i^j);
		}
	}
	cout << ans << endl;
	return 0 ;
}