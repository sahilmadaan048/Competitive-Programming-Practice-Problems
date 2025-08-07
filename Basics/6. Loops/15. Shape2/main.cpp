// https://vjudge.net/problem/Gym-287309T

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	for(int i=1; i<=n; i++){
		//for spaces
		for(int j=i+1; j<=n; j++) cout << " ";
		//for stars
		for(int j=1; j<=(2*i-1); j++) cout << "*" ;
		cout << endl;
	}
}