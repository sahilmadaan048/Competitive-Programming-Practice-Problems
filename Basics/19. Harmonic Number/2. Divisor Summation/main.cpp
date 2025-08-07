// https://www.spoj.com/problems/DIVSUM/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int sum = 0;
		for(int i=1; i*i<=n; i++){
			if(n%i == 0){
				if(i<n) sum+=i;
				if(i != n/i){
					if(n/i < n) sum+=n/i;
				}
			}
		}
		cout << sum << endl;
	}
	return 0;
}