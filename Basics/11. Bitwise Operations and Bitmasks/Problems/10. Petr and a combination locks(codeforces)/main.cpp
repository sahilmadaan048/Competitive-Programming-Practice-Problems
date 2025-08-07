// https://codeforces.com/problemset/problem/1097/B


#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n ;
	int total_sum = 0 ;
	bool flag = false;
	vector<int> temp(n);
	for(int i=0; i<n; i++) {
		cin >> temp[i];
		total_sum += temp[i];
	}
	if(total_sum == 360) {
		cout << "YES" << endl;
		return 0;
	}

	// sort(temp.begin(), temp.end());
	// vector<int> temp2(temp.begin(), temp.end()-1);
	// int count = temp.size();
	// int S = temp2[count-1];
	for(int mask = 0 ; mask <(1<<n); mask++){
		int subset_sum = 0 ;
		for(int i=0; i<n; i++) {
			if(mask&(1<<i) != 0) {
				subset_sum += temp[i];
			}
			else{
				 subset_sum -= temp[i];
			}
		}
		if(subset_sum % 360 == 0) {
			flag = true;
			// return 0 ;
			break;
		}
	}
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0 ;
}