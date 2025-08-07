// https://vjudge.net/problem/Gym-287306S

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b,c; cin>>a>>b>>c;
	int sum=a+b+c;
	int maxele = max({a,b,c});
	int minele = min({a,b,c});
	cout<<minele<<'\n' << sum-(maxele+minele)<< '\n' <<maxele<< '\n' << '\n' << a << '\n' << b << '\n' << c;
	return 0 ; 
}