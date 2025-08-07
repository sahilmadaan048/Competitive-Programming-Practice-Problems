// https://csacademy.com/contest/archive/task/gcd/

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	int result = min(a, b);
	while(result>0) {
		if(a%result == 0 and b%result == 0 ){
			// break;
			return result;
		}
		result--;
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b; cin >> a >> b;
	cout << gcd(a, b) << '\n';
	return 0 ;
}	