
// https://vjudge.net/problem/HackerRank-si-basic-check-bi
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k; cin >> n >> k ;
	if(n&(1<<k)) cout << "true" << endl;
	else cout << "false" << endl;
	return 0;
}