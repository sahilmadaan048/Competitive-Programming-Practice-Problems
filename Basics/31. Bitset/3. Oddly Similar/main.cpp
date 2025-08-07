// // // // https://atcoder.jp/contests/abc348/tasks/abc348_f

// // // // #include<bits/stdc++.h>
// // // // using namespace std;

// // // // int main() {
// // // // 	int t, n; cin >> t >> n;
// // // // 	vector<vector<int>> temp1;
// // // // 	while(t--){
// // // // 		vector<int> temp(n);
// // // // 		for(int i=0; i<n; i++) cin >> temp[i];
// // // // 		temp1.push_back(temp);
// // // // 	}
// // // // 	int cnt = 0 ;
// // // // 	for(auto &arr: temp1){
// // // // 		for(int mask = 0 ; mask<(1<<n); mask++){
// // // // 			bool oddly_similar = true;

// // // // 			for(int i=0; i<n; i++){
// // // // 				for(int j=i+1; j<n; j++){
// // // // 					if(mask&(1<<i) and mask&(1<<j)){
// // // // 						//odd similarity consition
// // // // 						if((arr[i]%2) != (arr[j]%2)){
// // // // 							oddly_similar = false;
// // // // 						}
// // // // 					}
// // // // 				}
// // // // 			}
// // // // 			if(oddly_similar and __builtin_popcount(mask)>1){
// // // // 				cnt++;
// // // // 			}
// // // // 		}
// // // // 	}	

// // // // 	cout << cnt << "\n";
// // // // 	return 0 ;
// // // // }

// // // // #include <bits/stdc++.h>
// // // // using namespace std;

// // // // int main() {
// // // //     int t, n;
// // // //     cin >> t >> n;  // t is the number of test cases, n is the length of the arrays
// // // //     vector<vector<int>> temp1;

// // // //     // Reading the input arrays
// // // //     while(t--) {
// // // //         vector<int> temp(n);
// // // //         for(int i = 0; i < n; i++) 
// // // //             cin >> temp[i];
// // // //         temp1.push_back(temp);  // Store each array in temp1
// // // //     }

// // // //     int cnt = 0;  // Count for the number of "oddly similar" subsets

// // // //     // Iterate over each test case
// // // //     for(const auto &arr : temp1) {
// // // //         // Iterate over all subsets of size n using bitmask
// // // //         for(int mask = 0; mask < (1 << n); mask++) {
// // // //             bool oddly_similar = true;

// // // //             // Compare the subset elements for "oddly similar" pattern
// // // //             for(int i = 0; i < n; i++) {
// // // //                 for(int j = i + 1; j < n; j++) {
// // // //                     if((mask & (1 << i)) && (mask & (1 << j))) { 
// // // //                         // Check condition for "odd similarity"
// // // //                         if((arr[i] % 2) != (arr[j] % 2)) {
// // // //                             oddly_similar = false;  // Elements i and j are not "oddly similar"
// // // //                         }
// // // //                     }
// // // //                 }
// // // //             }

// // // //             if(oddly_similar && __builtin_popcount(mask) > 1) {  // We consider subsets with more than 1 element
// // // //                 cnt++;  // Increment the count of valid subsets
// // // //             }
// // // //         }
// // // //     }

// // // //     // Output the result: number of "oddly similar" subsets
// // // //     cout << cnt << endl;

// // // //     return 0;
// // // // }



// // // //correct and but time limmit exceeded 

// // // #include <iostream>
// // // #include <vector>
// // // using namespace std;

// // // int main() {
// // //     cin.tie(nullptr);
// // //     ios::sync_with_stdio(false);

// // //     int N, M;
// // //     cin >> N >> M;
// // //     vector<vector<short>> A(N, vector<short>(M));
// // //     for (int i = 0; i < N; i++) {
// // //         for (int j = 0; j < M; j++) {
// // //             cin >> A[i][j];
// // //         }
// // //     }

// // //     int ans = 0;
// // //     for (int i = 0; i < N; i++) {
// // //         for (int j = i + 1; j < N; j++) {
// // //             int cnt = 0;
// // //             for (int k = 0; k < M; k++) {
// // //                 cnt ^= (A[i][k] == A[j][k]);
// // //             }
// // //             ans += cnt;
// // //         }
// // //     }

// // //     cout << ans << endl;
// // // }


// // #include <iostream>
// // #include <bitset>
// // #include <vector>
// // using namespace std;

// // const int MAX_M = 1000;  // Assuming M (number of columns) will not exceed 1000

// // int main() {
// //     cin.tie(nullptr);
// //     ios::sync_with_stdio(false);

// //     int N, M;
// //     cin >> N >> M;
    
// //     vector<bitset<MAX_M>> A(N);  // Using bitset to store each row
// //     for (int i = 0; i < N; i++) {
// //         for (int j = 0; j < M; j++) {
// //             short x;
// //             cin >> x;
// //             A[i][j] = x;  // Assign values to the bitset
// //         }
// //     }

// //     int ans = 0;
// //     for (int i = 0; i < N; i++) {
// //         for (int j = i + 1; j < N; j++) {
// //             // XOR operation between two bitsets gives a bitset where different bits are set
// //             int cnt = (A[i] ^ A[j]).count();  // Count the number of set bits (differences)
// //             ans += cnt;
// //         }
// //     }

// //     cout << ans << endl;
// // }



// // #pragma GCC optimise("O3")
// // #include <bits/stdc++.h>
// // using namespace std;


// // int main(){
// //     cin.tie(nullptr);
// //     ios::sync_with_stdio(false);

// //     int N,M;
// //     cin >> N >> M;
// //     vector<vector<short>> A(N, vector<short>(M));
// //     for(int i=0; i<N; i++){
// //         for(int j=0; j<M; j++){
// //             cin >> A[i][j];
// //         }
// //     }
// //     int ans = 0;
// //     for(int i=0; i<N; i++){
// //         for(int j=i+1; j<N; j++){
// //             int cnt = 0;
// //             for(int k=0; k<M; k++){
// //                 cnt ^= (A[i][k] == A[j][k]);
// //             }
// //             ans += cnt;
// //         }
// //     }
// //     cout << ans << "\n";
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> calculateSubtreeSizes(int n, vector<int>& parent, string& s) {
//     // Create adjacency list for the tree
//     vector<vector<int>> tree(n);
//     for (int i = 1; i < n; i++) {
//         tree[parent[i]].push_back(i);
//     }
    
//     vector<int> newParent(n, -1);
//     newParent[0] = -1; // Root remains unchanged

//     for (int x = 1; x < n; x++) {
//         int current = x;
//         while (current != -1) {
//             if (s[current] == s[x]) {
//                 newParent[x] = current; // Found the ancestor
//                 break;
//             }
//             current = parent[current];
//         }
//     }

//     vector<vector<int>> newTree(n);
//     for (int x = 1; x < n; x++) {
//         if (newParent[x] != -1) {
//             newTree[newParent[x]].push_back(x);
//         }
//     }

//     vector<int> subtreeSize(n, 0);
//     function<void(int)> dfs = [&](int node) {
//         int size = 1; // Count the current node
//         for (int child : newTree[node]) {
//             size += dfs(child); // Add sizes of all children
//         }
//         subtreeSize[node] = size;
//         return size;
//     };

//     dfs(0);

//     return subtreeSize;
// }

// int main() {
//     int n = 7; // Number of nodes
//     vector<int> parent = {-1, 0, 0, 1, 1, 1}; // Parent array
//     string s = "abaabc"; // Characters assigned to nodes

//     vector<int> answer = calculateSubtreeSizes(n, parent, s);

//     for (int size : answer) {
//         cout << size << " ";
//     }
//     cout << endl;

//     return 0;
// }



// #include <bits/stdc++.h> 
// using namespace std;

// class Solution {
// public:
//     int maxScore(int n, int k, vector<vector<int>>& stayScore, vector<vector<int>>& travelScore) {       
//         vector<vector<int>> dp(k, vector<int>(n, 0));

//         for (int j = 0; j < n; j++) {
//             dp[0][j] = stayScore[0][j];
//         }

//         for (int i = 1; i < k; i++) {
//             for (int j = 0; j < n; j++) {
//                 dp[i][j] = dp[i - 1][j] + stayScore[i][j];

//                 for (int dest = 0; dest < n; dest++) {
//                     if (dest != j) {
//                         dp[i][j] = max(dp[i][j], dp[i - 1][dest] + travelScore[dest][j]);
//                     }
//                 }
//             }
//         }

//         int maxPoints = 0;
//         for (int j = 0; j < n; j++) {
//             maxPoints = max(maxPoints, dp[k - 1][j]);
//         }

//         return maxPoints;
//     }
// };


#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int countPossibleStrings(const string& word, int k) {
        const int MOD = 1e9 + 7;
        int n = word.size();
        unordered_map<char, int> freq;

        for (char c : word) {
            freq[c]++;
        }

        vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, 0));
        dp[0][0] = 1;

        for (auto it = freq.begin(); it != freq.end(); ++it) {
            char char_ = it->first;
            int count = it->second;
            for (int length = n; length >= 0; length--) {
                for (int j = 0; j <= k; j++) {
                    for (int x = 1; x <= count; x++) {
                        if (length + x <= n && j + x <= k) {
                            dp[length + x][j + x] = (dp[length + x][j + x] + dp[length][j]) % MOD;
                        }
                    }
                }
            }
        }

        long long result = 0;
        for (int length = k; length <= n; length++) {
            result = (result + dp[length][k]) % MOD;
        }

        return result;
    }
};

int main() {
    Solution sol;
    string word = "aaabbb";
    int k = 3;
    int result = sol.countPossibleStrings(word, k);
    cout << result << endl;

    return 0;
}
