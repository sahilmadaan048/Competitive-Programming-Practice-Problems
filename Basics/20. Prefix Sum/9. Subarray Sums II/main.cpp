// https://cses.fi/problemset/task/1661

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
// 	int n, x; cin >> n >> x;
// 	vector<int> temp(n);
// 	for(int i=0; i<n; i++) cin >> temp[i];

// 	int count = 0 ;
// 	for(int mask = 0 ; mask<(1<<n); mask++){
// 		ll sum = 0 ;
// 		for(int i=0; i<n; i++){
// 			if((mask&(1<<i))){
// 				sum += temp[i];
// 			}
// 		}
// 		if(sum == x) count ++;
// 	}
// 	cout << count << "\n";
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     int n;
//     ll x;
//     cin >> n >> x;
//     vector<ll> temp(n); // Use long long for temp to handle large sums

//     for(int i = 0; i < n; i++) cin >> temp[i];

//     int count = 0;

//     // Generate all subarrays
//     for(int i = 0; i < n; i++) {
//         ll sum = 0;
//         for(int j = i; j < n; j++) {
//             sum += temp[j];
//             // Check if the sum of this subarray is equal to x
//             if(sum == x) count++;
//         }
//     }

//     cout << count << "\n";
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     int n;
//     ll x; // Use long long for x to handle large sums
//     cin >> n >> x;
    
//     vector<ll> temp(n); // Use long long for temp to handle large sums
//     for (int i = 0; i < n; i++) cin >> temp[i];

//     unordered_map<ll, ll> prefixCount; // To store the frequency of prefix sums
//     ll currentPrefixSum = 0;
//     ll count = 0;

//     // Traverse through the array
//     for (int i = 0; i < n; i++) {
//         currentPrefixSum += temp[i]; // Calculate the current prefix sum

//         // Check if the current prefix sum equals x
//         if (currentPrefixSum == x) count++;

//         // Check if (currentPrefixSum - x) exists in the map
//         if (prefixCount.find(currentPrefixSum - x) != prefixCount.end()) {
//             count += prefixCount[currentPrefixSum - x];
//         }

//         // Update the frequency of the current prefix sum in the map
//         prefixCount[currentPrefixSum]++;
//     }

//     cout << count << "\n";
//     return 0;
// }

#include <iostream>
#include <cmath>
#include <cstdint>
#include<bits/stdc++.h>

using namespace std;

const int64_t MOD = 1e9 + 7;

int64_t sum_of_divisors_up_to(int64_t n) {
    int64_t result = 0;
    int64_t limit = static_cast<int64_t>(sqrt(n));
    
    // Sum for all divisors up to the square root of n
    for (int64_t i = 1; i <= limit; ++i) {
        result = (result + i * (n / i)) % MOD;
    }

    // Sum for contributions from divisors greater than the square root of n
    for (int64_t i = 1; i <= limit; ++i) {
        result = (result + (n / i) * (n / i + 1) / 2) % MOD;
    }

    return result;
}

int main() {
    int64_t n;
    cin >> n;
    
    cout << sum_of_divisors_up_to(n) << endl;
    
    return 0;
}
