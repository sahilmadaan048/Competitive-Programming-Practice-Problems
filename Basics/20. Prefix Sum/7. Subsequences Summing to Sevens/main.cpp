// https://usaco.org/index.php?page=viewproblem2&cpid=595

/*
Farmer John's N
 cows are standing in a row, as they have a tendency to do from time to time. Each cow is labeled with a distinct integer ID number so FJ can tell them apart. FJ would like to take a photo of a contiguous group of cows but, due to a traumatic childhood incident involving the numbers 1…6
, he only wants to take a picture of a group of cows if their IDs add up to a multiple of 7.
Please help FJ determine the size of the largest group he can photograph.

INPUT FORMAT (file div7.in):
The first line of input contains N
 (1≤N≤50,000
). The next N
 lines each contain the N
 integer IDs of the cows (all are in the range 0…1,000,000
).
OUTPUT FORMAT (file div7.out):
Please output the number of cows in the largest consecutive group whose IDs sum to a multiple of 7. If no such group exists, output 0.
You may want to note that the sum of the IDs of a large group of cows might be too large to fit into a standard 32-bit integer. If you are summing up large groups of IDs, you may therefore want to use a larger integer data type, like a 64-bit "long long" in C/C++.

SAMPLE INPUT:
7
3
5
1
6
2
14
10
SAMPLE OUTPUT:
5
In this example, 5+1+6+2+14 = 28.

Problem credits: Brian Dean
*/

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// int main() {
// 	int n; cin >> n;
// 	vector<int> temp(n+1);
// 	for(int i=1; i<=n; i++) cin >> temp[i];

// 	vector<ll> prefix_sum(n+1, 0);
// 	for(int i=1; i<=n; i++) prefix_sum[i] = prefix_sum[i-1] + temp[i];

// 	int maxi = INT_MIN;
// 	int ans = 0 ; 
// 	for(int i=1; i<=n; i++) {
// 		for(int j=i+1; j<=n; j++){
// 			int diff = prefix_sum[j]-prefix_sum[i-1];
// 			if((diff) % 7 == 0){
// 				ans= i;
// 				if(maxi<diff){
// 					maxi = diff;
// 					ans = i+4;
// 				}
// 			}
// 		}
// 	}
// 	cout << ans << "\n";
// 	return 0;
// }	


#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    int n;
    cin >> n;
    vector<int> temp(n + 1);
    
    for (int i = 1; i <= n; i++) cin >> temp[i];

    vector<ll> prefix_sum(n + 1, 0);
    vector<int> first_occurrence(7, -1);  // Tracks the first occurrence of each mod value
    first_occurrence[0] = 0;  // If the prefix sum is already a multiple of 7

    int max_length = 0;

    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = (prefix_sum[i - 1] + temp[i]) % 7;

        if (first_occurrence[prefix_sum[i]] == -1) {
            first_occurrence[prefix_sum[i]] = i;
        } else {
            max_length = max(max_length, i - first_occurrence[prefix_sum[i]]);
        }
    }

    cout << max_length << "\n";
    return 0;
}
