// https://vjudge.net/problem/CodeForces-4C

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	unordered_map<string, int> mpp;
	while(t--){
		string s; cin >> s;
		if(mpp.find(s) == mpp.end()){
			cout << "OK" << "\n";
			mpp[s] += 1;
		}
		else{
			int cnt = mpp[s];
			mpp[s] += 1;
			string temp = to_string(cnt);
			cout << s + temp << "\n";
		}
	}
	return 0 ;
}