// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

#include<bits/stdc++.h>
using namespace std;

void print(int n){
	if(n==0) return;
	cout << "I love Recursion" << endl;
	print(n-1);
	// return;
}

int main() {
	int n; cin >> n ;
	print(n);
}