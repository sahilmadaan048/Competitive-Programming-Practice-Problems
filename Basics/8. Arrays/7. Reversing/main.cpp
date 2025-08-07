// https://vjudge.net/problem/Gym-287310F#google_vignette

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> temp(n);
	for(int i=0; i<n; i++) cin>> temp[i];
	for(int i=n-1; i>=0; --i) cout << temp[i] << " ";
	return 0 ;
}