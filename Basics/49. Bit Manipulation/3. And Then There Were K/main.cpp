// // https://codeforces.com/problemset/submit


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t; cin >> t;
// 	while(t--){
// 		int n; cin >> n;
// 		int ans = n;
// 		for(int i=n; i>=1; i--){
// 			if(ans == 0){
// 				cout << n  << "\n";
// 				break;
// 			}
// 			n--;
// 			ans &= n;
// 		}
// 		// cout << n << "\n";
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int ans = n;
//         for (int i = n; i >= 1; i--) {
//             if (ans == 0) {
//                 cout << n << "\n";
//                 break;
//             }
//             ans &= (i - 1);
//         }
//         if (ans != 0) {
//             cout << ans << "\n";
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cout << (1 << std::__lg(n)) - 1 << "\n";
    }
    return 0;
}