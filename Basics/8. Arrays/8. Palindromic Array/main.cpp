// https://vjudge.net/problem/Gym-287310G#google_vignette

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n ;
	vector<int> temp(n);
	for(int i=0; i<n; i++) cin >> temp[i];
	int i=0, j=n-1;
	bool flag = true;
	while(i<j){
		if(temp[i] != temp[j]){
			flag=false;
			break;
		}
		i++;
		j--;
	}
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
}