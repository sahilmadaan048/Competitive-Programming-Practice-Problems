// https://vjudge.net/problem/Aizu-ITP2_1_A

#include<bits/stdc++.h>
using namespace std;

int main () {
	vector<int> A;
	int q; cin >> q;
	
	while(q--) {
		int querytype;
		cin >> querytype;

		if(querytype == 0){
			int x; cin >> x;
			A.push_back(x);
		}
		else if(querytype == 1){
			int p; cin >> p;
			cout << A[p] << endl;
		}
		else if(querytype == 2){
			if(!A.empty()){
				A.pop_back();
			}
		}
	}
	return 0 ;
}