// https://vjudge.net/problem/HackerRank-si-lcm-and-hcf

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//my name is sahil
// ll gcd(ll a, ll b){
// 	ll result = min(a, b);
// 	while(result>0) {
// 		if(a%result == 0 and b%result == 0 ){
// 			// break;
// 			return result;
// 		}
// 		result--;
// 	}
// 	return 0;
// }

//eulers theorem

ll gcd(ll a, ll b){
	while(a !=0 and b!=0){
		int k = a%b;
		a = b;
		b = k;
	}
	return a+b;
}



// void lcm(ll a, ll b) {
// 	ll temp = gcd(a,b);
// 	cout << (a*b)/temp << " " << temp << endl;
// 	return;
// }

int main() {	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	while(t--){
		ll a, b; cin >>  a >>  b;
		int temp = gcd(a, b);
		cout << (a*b)/temp << " " << temp << endl;;
	}

	return 0 ;
}		