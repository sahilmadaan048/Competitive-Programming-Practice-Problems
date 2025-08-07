// https://codeforces.com/contest/1850/problem/F

#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	int n; cin >> n;
	vector<ll> cnt(n+1, 0), mx(n+1, 0);
	for(int i=0; i<n; i++) {
		int x; cin >> x;
		if(x<=n) cnt[x]++;
	}
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j+=i) mx[j] += cnt[i];
	}
	cout << *max_element(mx.begin(), mx.end()) << '\n';

}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}