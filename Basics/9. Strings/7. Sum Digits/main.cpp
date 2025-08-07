// https://vjudge.net/problem/Gym-287310K#google_vignette

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n ;
	string s; cin>>s;
	int ans= 0;
	for(int i=0; i<n; i++){
		ans += stoi(s.substr(i, 1));
	}
	cout << ans << endl;
}