// https://codeforces.com/contest/727/problem/A


//how can i use dfs here

#include<bits/stdc++.h>
using namespace std;
long long  a ,b;

bool dfs(long long a, vector<long long>&path){
	// path.push_back(a);
	if(a == b){
		return true;
	}
	long long firstmove = 2*a;
	long long secondmove = 10*a+1;

	if(firstmove<=b){
		if(dfs(firstmove, path) == true){
			path.push_back(firstmove);
			return true;
		}
	}
	if(secondmove<=b){
		if(dfs(secondmove, path) == true){
			path.push_back(secondmove);
			return true;
		}
	}
	return false;
}

int main(){
	cin >> a >> b;
	vector<long long> path;
	if(a>b) {
		cout << "NO" << endl;
		return 0;
	}
	else if(dfs(a, path)){
		cout << "YES" << endl;
		cout << path.size()+1 << endl;
		path.push_back(a);
		reverse(path.begin(), path.end());
		for(long long i=0; i<path.size(); i++) cout<< path[i] << " ";
	}
	else{
		cout << "NO" << endl;
	}
	return 0 ;
}