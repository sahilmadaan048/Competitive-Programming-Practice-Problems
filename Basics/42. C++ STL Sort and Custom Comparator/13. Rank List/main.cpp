// https://codeforces.com/problemset/problem/166/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector<pair<int,int>> temp;
	map<pair<int, int>, int> mp;
	for(int i=0; i<n; i++){
		int p, t; cin >> p >> t;
		temp.push_back(make_pair(p, t));
		mp[{p,t}]++;
	}	
	sort(temp.begin(), temp.end(), [](const pair<int, int>& a, const pair<int, int> &b){
		if(a.first != b.first){
			return a.first>b.first;
		}
		else{
			return a.second<b.second;
		}
	});
	pair<int,int> pairs = temp[k-1];
	cout << mp[pairs]<< "\n"; 
	return 0;
}