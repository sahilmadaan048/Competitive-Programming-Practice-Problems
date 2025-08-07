// https://vjudge.net/problem/Gym-287309R

#include<bits/stdc++.h>
using namespace std;

int main(){
	while(true){
		int n, m;
		cin >> n >> m;
		if(n<=0 || m<=0) break;
		else{
			int sum=0;
			for(int i=min(n,m); i<=max(n,m); i++){
				cout<<i<<" ";
				sum+=i;
			}
			cout<<"sum ="<< sum<<endl;
		}
	}
}