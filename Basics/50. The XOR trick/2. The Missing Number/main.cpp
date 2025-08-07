// https://cses.fi/problemset/task/1083

#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin >>n ; 
	int xur= 0;
	for(int i=1 ; i<=n ; i++){
		xur^=i;
	}
 
	for(int i= 0 ; i< n-1 ; i++){
		int x;
		cin >> x;
		xur ^= x;
	}
 
	cout << xur ;
}