// https://vjudge.net/problem/SPOJ-ACMCEG2B

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    map<pair<int,int>, string> mp;
	while(t--){
		int a,b;
		string s; 
		cin >> a >> b >> s;
        mp[{a,b}] = s;
	}
    int q; cin >> q;
    while(q--){
        int a, b; cin >> a >> b;
        cout << mp[{a, b}] << "\n";
    }
	return 0;
}

