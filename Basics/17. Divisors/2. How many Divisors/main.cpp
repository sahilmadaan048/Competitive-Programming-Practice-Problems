// https://vjudge.net/problem/Aizu-ITP1_3_D

#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c; cin>>a>>b>>c;
	int count = 0 ;
	for(int i=a; i<=b; i++) {
		if((c%i) == 0){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}