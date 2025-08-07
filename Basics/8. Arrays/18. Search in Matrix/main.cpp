// https://vjudge.net/problem/Gym-287310S

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m; cin >> n >> m ;
	vector<vector<int>> temp(n, vector<int>(m, 0));
	unordered_set<int> st;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> temp[i][j];
			st.insert(temp[i][j]);
		}
	}
	int num; cin >> num;
	bool flag= true;
	if(st.find(num) == st.end()){
		flag = false;
	}
	if(flag) cout << "will not take number" << endl;
	else cout << "will take number" << endl;
}