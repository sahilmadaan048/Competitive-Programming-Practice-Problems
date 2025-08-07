// https://codeforces.com/problemset/problem/550/B

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, l, r, x; cin >> n >> l >> r >> x;
	vector<int> temp(n);
	for(int i=0; i<n; i++) cin >> temp[i];
	if(n<2) {
		cout << 0 << endl;
		return 0;
	}
	int cnt  = 0;
	// int count
	for(int mask = 0; mask<(1<<n); mask++) {
		int subset_sum = 0 ;
		int mini = INT_MAX, maxi = INT_MIN;
		int elements_in_subset = 0 ;
		for(int i=0; i<n; i++) {
			if(mask & (1<<i)) {
				subset_sum += temp[i];
				mini = min(mini, temp[i]);
				maxi = max(maxi, temp[i]);
				elements_in_subset++;
			}
		}
		if(elements_in_subset>=2 and subset_sum >= l and subset_sum <= r and maxi-mini>=x) {
			cnt++;
		}
	}
	cout << cnt  << endl;
	return 0 ;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, l, r, x;
//     cin >> n >> l >> r >> x;
//     vector<int> temp(n);
//     for (int i = 0; i < n; i++) {
//         cin >> temp[i];
//     }

//     int cnt = 0;
//     for (int mask = 0; mask < (1 << n); mask++) {
//         int subset_sum = 0;
//         int mini = INT_MAX, maxi = INT_MIN;
//         int elements_in_subset = 0;

//         for (int i = 0; i < n; i++) {
//             if (mask & (1 << i)) {
//                 subset_sum += temp[i];
//                 mini = min(mini, temp[i]);
//                 maxi = max(maxi, temp[i]);
//                 elements_in_subset++;
//             }
//         }

//         if (elements_in_subset >= 2 && subset_sum >= l && subset_sum <= r && maxi - mini >= x) {
//             cnt++;
//         }
//     }

//     cout << cnt << endl;
//     return 0;
// }
