// https://codeforces.com/problemset/problem/484/A

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t; cin >> t;
// 	while(t--){
// 		int l, r; cin >> l >> r;
// 		for(int i=r; i>=l; i--){
// 			if(__builtin_popcount(i) == 1){
// 				cout << (i-1) << "\n";
// 				break;
// 			}
// 		}
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; cin >> t;
//     while(t--) {
//         int l, r; cin >> l >> r;
//         // Start from r and move downwards
//         for (int i = r; i >= l; --i) {
//             // Check if i-1 is a power of 2
//             if ((i - 1) > 0 && ((i - 1) & ((i - 1) - 1)) == 0) {
//                 cout << i - 1 << "\n";
//                 break;
//             }
//         }
//     }
//     return 0;
// }
