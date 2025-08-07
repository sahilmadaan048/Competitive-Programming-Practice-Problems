#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int countsetbits(ll x){
	return __builtin_popcount(x);
}

ll findmaxbitsnumber(ll a, ll b){
	int bitlen = 0 ;
	ll temp = b;
	while(temp>0){
		temp >>= 1;
		bitlen++;
	}

	ll maxbitnum = 0;
	for(int i=0; i<bitlen; i++){
		maxbitnum = (maxbitnum << 1) | 1;
	}

	if(maxbitnum > b){
		maxbitnum = (1LL << (bitlen-1))-1;
	}

	return max(a, maxbitnum);
}


int main(){
	int n; cin >> n;

	while(n--){
		ll a, b; cin >> a >> b;
		ll ans = findmaxbitsnumber(a, b);
		cout << ans << "\n";
	}
	return 0;
}