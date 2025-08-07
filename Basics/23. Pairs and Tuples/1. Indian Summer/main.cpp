// https://codeforces.com/contest/44/problem/A

#include<bits/stdc++.h>
#include<tuple>
#include<set>
using namespace std;

int main() {
	int n; cin >> n;
	int count = 0;
	set<tuple<string, string>> st;
	while(n--){
		string s1, s2; cin >> s1 >> s2;
		auto it = make_tuple(s1, s2);
		st.insert(it);
	}
	cout << st.size() << endl;
	return 0;
}