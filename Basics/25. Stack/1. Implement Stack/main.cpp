// https://vjudge.net/problem/HackerRank-si-implement-stack#google_vignette

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t ; cin >> t;
	stack<int> st;
	while(t--){
		string s; cin >> s;
		if(s == "push"){
			int n; cin >> n ;
			st.push(n);
		}
		else if(s == "pop"){
			if(!st.empty()){
				cout << st.top() << endl;
				st.pop();
			}
			else cout << "Empty" << endl;
		}
	}
	return 0 ;
}