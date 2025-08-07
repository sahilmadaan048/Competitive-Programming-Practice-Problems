// https://vjudge.net/problem/Gym-293843F

#include<bits/stdc++.H>
using namespace std;

int main(){
	int t; cin>> t;
	while(t--){
		string s; cin>>s;
		int n = s.size();
		// string ans = "";
		if(n>10){
			cout << s[0] << n-2 << s[n-1] << endl;
		}
		else cout << s << endl;
	}
}