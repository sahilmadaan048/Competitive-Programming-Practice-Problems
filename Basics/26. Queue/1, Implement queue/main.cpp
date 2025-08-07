// https://vjudge.net/problem/HackerRank-si-implement-queue

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	queue<int> q;
	while(t--){
		string s; cin >> s;
		if(s == "Enqueue"){
			int n; cin >> n ;
			q.push(n);
		}
		else if(s == "Dequeue"){
			if(!q.empty()){
				cout << q.front() << "\n";
				q.pop();
			}
			else cout << "Empty" << "\n";
		}
	}
	return 0;
}