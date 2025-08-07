// https://cses.fi/problemset/task/1619/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	map<int, int> mpp;
	for(int i=0; i<n; i++) {
		int start, end; cin >> start >> end;
		mpp[start]++;
		mpp[end]--;
	}

	int maxcustomers = 0 ;
	int currentcustomers = 0;
	for(auto pair : mpp){
		currentcustomers += pair.second;
		maxcustomers = max(maxcustomers, currentcustomers);
	}
	cout << maxcustomers << "\n";
	return 0;
}