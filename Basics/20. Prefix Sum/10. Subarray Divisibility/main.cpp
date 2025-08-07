// https://cses.fi/problemset/task/1662

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main(){
// 	int n, k; cin >> n ;
// 	vector<int> temp(n);
// 	int count = 0;
// 	for(int i=0; i<n; i++) cin >> temp[i];
// 	for(int i=0; i<n; i++){
// 		ll sum = 0 ;
// 		for(int j=i; j<n; j++){
// 			sum += temp[j];

// 			if(sum % n == 0) count++;
// 		}	
// 	}
// 	cout << count << "\n";
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     int n;
//     cin >> n;
//     vector<int> temp(n);
//     for (int i = 0; i < n; i++) cin >> temp[i];

//     unordered_map<int, int> remainderCount; // Map to store the frequency of remainders
//     remainderCount[0] = 1; // Initialize with 0 remainder count as 1 for subarrays starting from index 0
//     ll currentPrefixSum = 0;
//     ll count = 0;

//     for (int i = 0; i < n; i++) {
//         currentPrefixSum += temp[i]; // Calculate the current prefix sum

//         // Find the remainder when prefix sum is divided by n
//         int remainder = ((currentPrefixSum % n) + n) % n; // Normalize remainder to be positive

//         // Check how many times this remainder has occurred before
//         if (remainderCount.find(remainder) != remainderCount.end()) {
//             count += remainderCount[remainder];
//         }

//         // Increment the frequency of this remainder
//         remainderCount[remainder]++;
//     }

//     cout << count << "\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<int, int> remainderCount; // Map to store the frequency of remainders
    remainderCount[0] = 1; // Initialize remainder 0 with count 1 to handle subarrays from the start
    ll currentPrefixSum = 0;
    ll count = 0;

    for (int i = 0; i < n; i++) {
        currentPrefixSum += a[i]; // Update the current prefix sum

        // Compute the remainder when the current prefix sum is divided by n
        int remainder = ((currentPrefixSum % n) + n) % n; // Normalize remainder to be positive

        // If the remainder has occurred before, it indicates there are subarrays ending at i
        // which are divisible by n
        if (remainderCount.find(remainder) != remainderCount.end()) {
            count += remainderCount[remainder]; // Add the count of such subarrays
        }

        // Increment the frequency of this remainder
        remainderCount[remainder]++;
    }

    cout << count << "\n";
    return 0;
}



//this code is giving cprrect ans for every single wrong ouptut it us showing on the site
