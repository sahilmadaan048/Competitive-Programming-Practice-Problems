// https://vjudge.net/problem/Gym-405759K#google_vignette

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n ;
	for(int i=1; i<=n; i++){
		if((n%i) == 0) cout << i << endl;
	}
	return 0;
}