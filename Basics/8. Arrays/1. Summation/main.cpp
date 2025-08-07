// https://vjudge.net/problem/Gym-287310A

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	// vector<int> temp(n);
	long long sum = 0 ;
	for(int i=0; i<n; i++){
		// cin >> temp[i];
		int a; cin >> a;
		sum += a;
	}
	cout << abs(sum) << endl;
	return 0;
}