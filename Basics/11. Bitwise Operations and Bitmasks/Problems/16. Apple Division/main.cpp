// https://cses.fi/problemset/task/1623




// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n; cin >> n;
// 	string temp = "";
// 	for(int i=1; i<=n; i++) {
// 		temp += to_string(i);
// 		// cout << temp << endl;
// 	}
// 	cout << temp[n-1] << endl;
// }

#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
const lli mod = 1e9 + 7;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	lli n, total=0, ans=INT_MAX;
	cin >> n;
	li arr[n];
	for(lli i = 0; i < n; i++) {
		cin >> arr[i];
		total += arr[i];
	}
	for(lli i = 0; i < 1<<n; i++) {
		lli s = 0;
		for(lli j = 0; j < n; j++) {
			if(i & 1<<j) s += arr[j];
		}
		lli curr = abs((total-s)-s);
		ans = min(ans, curr);
	}
	cout << ans;
	return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; 
//     cin >> n;
//     vector<int> temp(n);
//     int total_sum = 0;

//     for (int i = 0; i < n; i++) {
//         cin >> temp[i];
//         total_sum += temp[i];
//     }

//     int mini = INT_MAX; // Initialize mini to the largest possible value

//     for (int mask = 0; mask < (1 << n); mask++) {
//         int sum = 0; // Reset sum for each subset
//         for (int i = 0; i < n; i++) {
//             if (mask & (1 << i) ) {
//                 sum += temp[i];
//             }
//         }
//         // Update mini with the minimum difference found
//         mini = min(mini, abs(total_sum - 2*sum));
//     }

//     cout << mini << endl;
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n; cin >> n ;
// 	vector<int> temp(n);
// 	int total_sum = 0;
// 	for(int i=0; i<n; i++) {
// 		cin >> temp[i];
// 		total_sum += temp[i];
// 	}
// 	int mini = INT_MAX;
// 	for(int mask = 0; mask<(1<<n); mask++){
// 		int sum = 0 ;
// 		for(int i=0; i<n; i++) {
// 			if(mask&(1<<i)) {
// 				sum += temp[i];
// 			}
// 		}

// 		mini = min(mini, abs(total_sum-2*sum));
// 	}
// 	cout << mini << endl;
// 	return 0;
// }