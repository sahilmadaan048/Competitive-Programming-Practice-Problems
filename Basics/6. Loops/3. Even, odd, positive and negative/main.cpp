// https://vjudge.net/problem/Gym-287309C

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n ;
	int odd = 0, even=0, pos=0,neg=0;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		if(a>0)pos++;
		if(a<0)neg++;
		if((abs(a)&1) == 0)even++;
		if((abs(a)&1) != 0)odd++;
	}
	cout<<"Even: "<<even<<endl;
	cout<<"Odd: "<<odd<<endl;
	cout<<"Positive: "<<pos<<endl;
	cout<<"Negative: "<<neg;
}