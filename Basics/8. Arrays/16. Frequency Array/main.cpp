// https://vjudge.net/problem/Gym-287310V

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin>>n >> m ;
	vector<int> temp(n+1), temp2(m+1);
	for(int i=0; i<n; i++){
		cin >> temp[i];
		temp2[temp[i]]++;
	}	
	for(int i=1; i<=m; i++) cout << temp2[i] << "\n";

}