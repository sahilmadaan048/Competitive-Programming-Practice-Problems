// https://codeforces.com/contest/242/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n ;
	vector<pair<int,int>> temp;
	vector<int> temp2;
	for(int i=0; i<n; i++){
		int a, b;
		cin >> a>> b;
		temp.push_back({a,b});
		temp2.push_back(a);
		temp2.push_back(b);
	}

	int maxele = *max_element(temp2.begin(), temp2.end());
	int minele = *min_element(temp2.begin(), temp2.end());
	int index = -2;
	// bool flag = false;
	for(int i=0; i<temp.size(); i++){
		auto pair = temp[i];
		if(pair.first <= minele and pair.second >= maxele){
			// flag = true;
			index  = i;
			break;
		}
	}
	cout << index+1 << endl;
}