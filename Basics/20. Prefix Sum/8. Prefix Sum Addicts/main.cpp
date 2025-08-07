// https://codeforces.com/problemset/problem/1738/B

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		vector<int> temp(k);
		for(int i=0 ; i<k; i++) cin >> temp[i];  //this is the prefix array for the usual aareay
			//and we have to check if it is possoble to do it within the same 
		vector<int> temp2;
		for(int i=1; i<k; i++){
			temp2.push_back(temp[i]-temp[i-1]);
		}
		bool flag = true;

		for(int i=1; i<temp2.size(); i++){
			if(temp2[i]<temp2[i-1]){
				flag = false;
				break;
			}
		}
        if (flag) {
            // We need to check if the first element of the array can accommodate n-k+1 elements
            if (k == 1) {
                // If k == 1, we directly check if we can fit the first segment
                flag = true;
            } else {
                long long min_first_element = temp[0];
                long long max_first_element = 1LL * temp2[0] * (n - k + 1);
                if (min_first_element > max_first_element) {
                    flag = false;
                }
            }
        }

		if(flag) cout << "yes" << "\n";
		else cout << "no"<< "\n";
	}
	return 0 ;
}