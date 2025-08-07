// https://vjudge.net/problem/HackerRank-si-reverse-bits#google_vignette

#include<bits/stdc++.h>
using namespace std;

long long to_decimal(vector<int>& temp){
	long long ans = 0 ;
	int n = temp.size();
	for(int i=0; i<n; ++i){
		ans += temp[i]*(1LL<<(n-1-i));  //basic binary to decimal conversion
	}
	return ans;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> temp;
		int count = 32;
		while(count--){
			int bit = (n&1);
			temp.push_back(bit);
			n >>= 1;
		}
		// for(auto ele: temp){
			// cout << ele;
		// }
		cout << to_decimal(temp) << "\n";
	}
}