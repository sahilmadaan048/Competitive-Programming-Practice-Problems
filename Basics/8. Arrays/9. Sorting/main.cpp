// https://vjudge.net/problem/Gym-287310H

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n ;
	vector<int> temp(n);
	for(int i=0; i<n; i++) cin>>temp[i];
	sort(temp.begin(), temp.end());
	for(int i=0; i<n; i++) cout << temp[i] << " ";
	return 0 ;
}