// https://vjudge.net/problem/HackerRank-cpp-maps

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
	fast;
	int t; cin >> t;
	unordered_map<string, int> mpp;
	while(t--){
		int x; cin >> x;
		string s; cin >> s;
		if(x==1){
			// string s; cin >> s;
			int num ; cin >> num;
			mpp[s] += num;
		}
		else if(x==2){
			// string s; cin >> s;
			mpp[s] = 0;
		}
		else if(x==3){
			// string s; cin >> s;
			cout << mpp[s] << endl;
		}
	}
	return 0;
}