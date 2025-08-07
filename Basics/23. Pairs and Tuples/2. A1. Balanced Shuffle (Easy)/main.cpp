// https://codeforces.com/problemset/problem/1970/A1

#include<bits/stdc++.h>
#include<tuple>
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	vector<tuple<int, int, char>> a;
	int b = 0 ; //initialsise b to 0
	for(int i=0; i<n; i++) {
		a.push_back(make_tuple(b,-i,s[i]));
		if(s[i] == '('){
			b += 1;
		}else{
			b -= 1;
		}
	}

	sort(a.begin(), a.end());
	for(auto const&x : a){
		cout << get<2>(x);
	}
	cout << endl;
}
