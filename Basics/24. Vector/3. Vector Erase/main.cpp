// https://vjudge.net/problem/HackerRank-vector-erase

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> temp(n);
	for(int i=0; i<n; i++) cin >> temp[i];
	int x; cin >> x;
	int a, b; cin >> a >> b;
	auto it = temp.begin();
	temp.erase(it+x-1);
	temp.erase(it+a-1, it+b-1) ;
	cout << temp.size() << endl;
	for(auto ele : temp) {
		cout << ele << " ";
	}
	return 0 ;
}