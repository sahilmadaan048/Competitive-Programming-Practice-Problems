// https://youkn0wwho.academy/topic-list/deque

#include<bits/stdc++.h>
// #include<deque>
using namespace std;


int main(){
	deque<int> dq;
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n;
		if(s == "push_back"){
			cin >> n;
			dq.push_back(n);
		}
		else if(s == "pop_front"){
			if(!dq.empty()){
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			else cout << "Empty" << '\n';
		}
		else if(s == "pop_back"){
			if(!dq.empty()){
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else cout << "Empty" << '\n';	
		}
		else if(s == "push_front"){
			cin >> n;
			dq.push_front(n);
		}
	}
	return 0;
}