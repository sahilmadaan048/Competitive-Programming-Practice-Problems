// https://codeforces.com/problemset/problem/1328/A

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int a,b; cin >> a >> b;
		int ans = 0 ;
		if(a>b and (a%b != 0)){
			int mod = a/b;
			ans = (mod+1)*b-a;
		}
		else if(a<b){
			ans = b-a;
		}
		cout << ans << '\n';
	}
	return 0;
}