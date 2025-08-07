// https://vjudge.net/problem/CodeForces-855A#google_vignette

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	unordered_map<string, int> mpp;
	while(t--){
		string s; cin >> s;
		if(mpp.find(s) == mpp.end()){
			cout << "NO" << "\n";
		}
		else {
			cout << "YES" << "\n";
		}
		// mpp[s] = 1;
		mpp[s] += 1;
	}
	return 0;
}