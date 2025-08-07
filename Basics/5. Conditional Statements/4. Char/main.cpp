// https://vjudge.net/problem/Gym-287306M

#include<bits/stdc++.h>
using namespace std;

int main(){
	char c; cin>>c;
	if(islower(c)){
		c= toupper(c);
		cout << c;
	}
	else if(isupper(c)){
		c=tolower(c);
		cout<<c;
	}
	return 0;
}