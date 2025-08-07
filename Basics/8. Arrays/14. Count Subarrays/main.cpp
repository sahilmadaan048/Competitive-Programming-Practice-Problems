// https://vjudge.net/problem/Gym-287310Q

#include<bits/stdc++.h>
using namespace std;

bool isascending(vector<int>& temp){
	vector<int> temp2 = temp;
	sort(temp2.begin(), temp2.end());
	return temp2 == temp;
}

int main(){
	int t; cin>>t ;
	while(t--){
		int n; cin>>n;
		int count = 0;
		vector<int> temp(n);
		for(int i=0; i<n; i++) cin >> temp[i];
		// vector<vector<int>> temp2;
		for(int i=0; i<n; i++){
			vector<int> subarray;
			for(int j=i; j<n; j++){
				subarray.push_back(temp[j]);
				if(isascending(subarray)) count++;
			}
			// temp2.push_back(temp3);

		}
		cout << count << endl;
	}
	return 0 ;
}