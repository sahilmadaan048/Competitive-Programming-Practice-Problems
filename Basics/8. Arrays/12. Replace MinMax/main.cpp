// https://vjudge.net/problem/Gym-287310M

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n ;
	vector<int> temp(n);
	int minNum=INT_MAX, idx1=0, maxNum=INT_MIN, idx2=0;
	for(int i=0; i<n; i++) {
		cin >> temp[i];
		if(temp[i]>maxNum){
			maxNum=temp[i];
			idx2=i;
		}
		else if(temp[i]<minNum){
			minNum=temp[i];
			idx1=i;
		}
	}
	swap(temp[idx1], temp[idx2]);
	for(int i=0; i<n; i++) cout << temp[i] << " ";
	return 0 ;
}