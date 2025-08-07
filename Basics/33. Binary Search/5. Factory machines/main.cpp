// https://cses.fi/problemset/task/1620

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long t;
    cin >> n >> t;
    vector<long long> temp(n);
    for (int i = 0; i < n; i++) {
        cin >> temp[i];
    }

    unordered_map<long long, long long> temp2;
    long long lo = 1, hi = 1e18;
    long long ans = hi;

    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;

        // Calculate the number of products that can be made in 'mid' time
        temp2.clear();  // Clear the map for each iteration
        long long total_products = 0;

        for (int i = 0; i < n; i++) {
            long long num = mid / temp[i];
            total_products += num;
            temp2[temp[i]] += num * temp[i];
            if (total_products >= t) break;  // No need to continue if we already reach t
        }

        if (total_products >= t) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    // Find the maximum contribution to the total time from the map
    long long max_contribution = 0;
    for (auto& pair : temp2) {
        max_contribution = max(max_contribution, pair.second);
    }

    cout << ans << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     long long t;
//     cin >> n >> t;
//     vector<long long> temp(n);
//     for (int i = 0; i < n; i++) {
//         cin >> temp[i];
//     }

//     // Binary search on time
//     long long lo = 1, hi = 1e18;
//     long long ans = hi;

//     while (lo <= hi) {
//         long long mid = lo + (hi - lo) / 2;

//         // Calculate the number of products that can be made in 'mid' time
//         long long total_products = 0;
//         for (int i = 0; i < n; i++) {
//             total_products += mid / temp[i];
//             if (total_products >= t) break;  // No need to continue if we already reach t
//         }

//         if (total_products >= t) {
//             ans = mid;  // Possible to produce t products in 'mid' time
//             hi = mid - 1;
//         } else {
//             lo = mid + 1;
//         }
//     }

//     cout << ans << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n, t; cin>>n >> t;
// 	vector<int> temp(n); for(int i=0; i<n; i++) cin >> temp[i];
// 	// int count=  0
// 	unordered_map<int, int> temp2;
// 	while(t>0){
// 		for(int i=0 ;i<n ; i++){
// 			int num = t/temp[i];
// 			temp2[temp[i]] += num*temp[i];
// 			t -= num;
// 		}
// 		if(t<=0) break;
// 	}
// 	int ans = 0 ;
// 	for(auto pair: temp2){
// 		ans = max(ans, pair.second);
// 	}
// 	cout << ans << endl;
// 	return 0 ;
// }
