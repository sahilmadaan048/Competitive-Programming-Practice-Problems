// https://vjudge.net/problem/Aizu-ITP2_2_C

#include<bits/stdc++.h>
#include <iostream>
#include <queue>
#include <vector>
// #include<priority_queue>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);


int main() {
	int t, q; cin >> t >> q;
	vector<priority_queue<ll>> pq(t);
	while(q--){
		ll ch, n, x;
		cin >> ch >> n;
		if(ch == 0){
			cin >> x;
			pq[n].push(x);
		}
		else if(ch == 1){
			if(!pq[n].empty()){
				cout << pq[n].top() << "\n";
			}
		}
		else{
			if(!pq[n].empty()){
				pq[n].pop();
			}
		}
	}
	return 0;
}