// https://vjudge.net/problem/AtCoder-abc171_e#google_vignette

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> temp(n);
	int var = 0;
	for(int i=0; i<n; i++){
		 cin >> temp[i];
		 var ^= temp[i];
	}

	for(int i=0; i<n; i++){
		cout << (var^temp[i]) << " ";
	}
	return 0;
}