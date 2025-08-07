// https://vjudge.net/problem/Gym-287310I#google_vignette

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin>>n;
		vector<int> temp(n);
		for(int i=0; i<n ; i++) cin >> temp[i];
		int ans = INT_MAX;
		for(int i=1; i<=n-1; i++){
			for(int j=i+1; j<=n; j++){
				ans = min(ans, temp[i-1]+temp[j-1]+j-i);
			}
		}
		cout << ans << endl;
	}
	return 0 ;
}