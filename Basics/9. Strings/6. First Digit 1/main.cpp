// https://vjudge.net/problem/Gym-287306O

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	string num = s.substr(0, 1);
	int n = stoi(num);
	if((n&1) == 0) cout << "EVEN" << endl;
	else cout << "ODD" <<endl;
}