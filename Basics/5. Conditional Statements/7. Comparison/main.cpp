// https://vjudge.net/problem/Gym-287306U

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b; char c;
	cin >> a >> c >> b;
	if((a>b and c=='>') || (a<b and c=='<') || (a==b and c=='=')){
		cout << "Right" ;
	}
	else cout << "Wrong";
}