// https://vjudge.net/problem/Aizu-ITP2_1_D

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	vector<vector<int>> temp(n+1);
	while(q--){
		int n, t, x;
		cin >> n;
		if(n == 0){
			cin >> t >> x;
			temp[t].push_back(x);
		}
		else if(n == 1){
			cin >> t;
			for(auto ele : temp[t]) {
				cout << ele << " " ;
			}
			cout << endl;
		}
		else if(n == 2){
			cin >> t;
			temp[t].clear();
		}
	}
	return 0 ;
}