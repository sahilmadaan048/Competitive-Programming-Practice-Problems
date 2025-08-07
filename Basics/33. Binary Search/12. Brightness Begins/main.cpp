// https://codeforces.com/contest/2020/problem/B

#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;


ll solve(ll k){
	// ll n = k;
	ll left = sqrt(k);
	ll right = 2*k;
	while(left<right){
		ll mid = left+(right-left)/2;
		ll temp = sqrt(mid);
		if(mid-temp<k){
			left = mid+1;
		}
		else{
			right = mid;
		}
	}
	return left;
}


int main(){
	fast;
	int t;cin>>t;
	while(t--){
		ll k; cin>>k;
		cout << solve(k) << "\n";
	}
	return 0;
}